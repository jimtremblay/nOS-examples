// ==================================================================================================
// STARTUP  ASSEMBLY  CODE
// ==================================================================================================

    .syntax unified
    .arch armv4t

// --------------------------------------------------------------------------------------------------
// global
// --------------------------------------------------------------------------------------------------

.global Isr_vector
.global Reset_Handler
.global b_arm
.global __StackLimit
.global __StackTop
.global __HeapBase
.global __HeapLimit

// --------------------------------------------------------------------------------------------------
// Stack Sizes
// --------------------------------------------------------------------------------------------------
.set  UND_STACK_SIZE, 0x00000040  // stack for "undefined instruction"
.set  ABT_STACK_SIZE, 0x00000040  // stack for "abort"
.set  FIQ_STACK_SIZE, 0x00000040  // stack for "FIQ"
.set  IRQ_STACK_SIZE, 0X00000100  // stack for "IRQ"
.set  SVC_STACK_SIZE, 0x00000100  // stack for "SVC"

// --------------------------------------------------------------------------------------------------
// Standard definitions of Mode bits and Interrupt (I & F) flags in PSRs (program status registers)
// --------------------------------------------------------------------------------------------------
.set  MODE_USR, 0x10              // Normal User Mode
.set  MODE_FIQ, 0x11              // FIQ Processing Fast Interrupts Mode
.set  MODE_IRQ, 0x12              // IRQ Processing Standard Interrupts Mode
.set  MODE_SVC, 0x13              // Supervisor Processing Software Interrupts Mode
.set  MODE_ABT, 0x17              // Abort Processing memory Faults Mode
.set  MODE_UND, 0x1B              // Undefined Processing Undefined Instructions Mode
.set  MODE_SYS, 0x1F              // System Running Priviledged Operating System Tasks Mode

.set  I_BIT, 0x80                 // when I bit is set, IRQ is disabled (program status registers)
.set  F_BIT, 0x40                 // when F bit is set, FIQ is disabled (program status registers)

// --------------------------------------------------------------------------------------------------
// Stack
// --------------------------------------------------------------------------------------------------

    .section    .stack
    .align      0
#ifdef __STACK_SIZE
    .equ        Stack_Size, __STACK_SIZE
#else
    .equ        Stack_Size, 0x400
#endif

__StackLimit:
    .space      (Stack_Size + (UND_STACK_SIZE + ABT_STACK_SIZE + FIQ_STACK_SIZE + IRQ_STACK_SIZE + SVC_STACK_SIZE))
    .size       __StackLimit, . - __StackLimit
__StackTop:
    .size       __StackTop, . - __StackTop

// --------------------------------------------------------------------------------------------------
// Heap
// --------------------------------------------------------------------------------------------------

    .section    .heap
    .align 0
#ifdef __HEAP_SIZE
    .equ        Heap_Size, __HEAP_SIZE
#else
    .equ        Heap_Size, 0xC00
#endif
__HeapBase:
    .if         Heap_Size
    .space      Heap_Size
    .endif
    .size       __HeapBase, . - __HeapBase
__HeapLimit:
    .size       __HeapLimit, . - __HeapLimit

// --------------------------------------------------------------------------------------------------
// ISR Vector
// --------------------------------------------------------------------------------------------------

    .section        .isr_vector
    .align          0
Isr_vector:
            ldr     PC, Reset_Addr   // Reset Exception
            ldr     PC, Undef_Addr   // Undefined Instruction
            ldr     PC, SWI_Addr     // Software Interrupt
            ldr     PC, PAbt_Addr    // Prefetch Abort (instruction fetch memory fault)
            ldr     PC, DAbt_Addr    // Data Abort (data access memory fault)
            nop
            Ldr     PC, [PC, #-0x0120]
            ldr     PC, FIQ_Addr     // FIQ

Reset_Addr: .word   Reset_Handler   // Reset Routine
Undef_Addr: .word   UNDEF_Handler   // Undefined Instruction Interrupt Routine
SWI_Addr:   .word   SWI_Handler     // Software Interrupt Routine                   // swich contect for nos
PAbt_Addr:  .word   PAbt_Handler    // Prefetch Abort Interrupt Routine
DAbt_Addr:  .word   DAbt_Handler    // Data Abort Handler
            .word   0               // rounds the vectors and ISR addresses to 64 bytes total
IRQ_Addr:   .word   IRQ_Handler     // IRQ Routine
FIQ_Addr:   .word   FIQ_Handler     // FIQ Routine

 .size    Isr_vector, . - Isr_vector

// --------------------------------------------------------------------------------------------------
// Reset Handler
// --------------------------------------------------------------------------------------------------

   .section .text
   .arm
   .align 0

b_arm:
.func Reset_Handler
Reset_Handler:
       ldr     r0, =__StackTop
       msr     CPSR_c, #MODE_UND|I_BIT|F_BIT  // Undefined Instruction Mode
       mov     sp, r0
       sub     r0, r0, #UND_STACK_SIZE
       msr     CPSR_c, #MODE_ABT|I_BIT|F_BIT  // Abort Mode
       mov     sp, r0
       sub     r0, r0, #ABT_STACK_SIZE
       msr     CPSR_c, #MODE_FIQ|I_BIT|F_BIT  // FIQ Mode
       mov     sp, r0
       sub     r0, r0, #FIQ_STACK_SIZE
       msr     CPSR_c, #MODE_IRQ|I_BIT|F_BIT  // IRQ Mode
       mov     sp, r0
       sub     r0, r0, #IRQ_STACK_SIZE
       msr     CPSR_c, #MODE_SVC|I_BIT|F_BIT  // Supervisor Mode
       mov     sp, r0
       sub     r0, r0, #SVC_STACK_SIZE
       msr     CPSR_c, #MODE_SYS|I_BIT|F_BIT  // User Mode
       mov     sp, r0

       // copy .data section (Copy from ROM to RAM)
       ldr     R1, =__etext
       ldr     R2, =__data_start__
       ldr     R3, =__data_end__
1:     cmp     R2, R3
       ldrlo   R0, [R1], #4
       strlo   R0, [R2], #4
       blo     1b

       // Clear .bss section (Zero init)
       mov     R0, #0
       ldr     R1, =__bss_start__
       ldr     R2, =__bss_end__
2:     cmp     R1, R2
       strlo   R0, [R1], #4
       blo     2b

       // Enter the C code
       b       main

      .size Reset_Handler, . - Reset_Handler

.endfunc
.end
