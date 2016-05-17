# nOS example projects

### How to use:
1. Clone this repository and cd into it:
    * git clone https://github.com/jimtremblay/nOS-examples.git && cd nOS-examples
2. Add nOS to the project you want to run:
    * Check if the project uses nOS as a submodule:
        - git submodule status
    * If so, initialize and update nOS submodule for it:
        - git submodule init *project_name*/nOS
        - git submodule update *project_name*/nOS
    * If not, you will need to clone the nOS repo into the project folder:
        - git clone https://github.com/jimtremblay/nOS.git
    * or add it yourself as a submodule:
        - git submodule add https://github.com/jimtremblay/nOS.git
3. Launch the IDE the project works with.
4. If a workspace file is supplied with the project, open it. If not, import the project into a workspace of your choice.
5. You should now be able to compile and run the project.