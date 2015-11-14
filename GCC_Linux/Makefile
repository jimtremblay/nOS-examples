EXEC=GCC_Linux
SRCS:=$(wildcard *.c) $(wildcard nOS/src/*.c) $(wildcard nOS/src/port/POSIX/*.c)
INCS=-Iconfig -InOS/inc -InOS/inc/port/POSIX
LIBS=-lpthread
#######################################################################################

CC=gcc

CFLAGS  = -g -O2 -Wall -std=c99 -D_GNU_SOURCE
LDFLAGS =

OBJS = $(SRCS:.c=.o)

.PHONY: all clean

all: $(EXEC)

.c.o:
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@

$(EXEC): $(OBJS)
	$(CC) $(OBJS) -o $@ $(LDFLAGS) $(LIBS)

clean:
	rm -f $(OBJS) $(EXEC)

