# Description
Simulate demo operation of FreeRTOS

# Software
- Microsoft Visual Studio

# Source
- ConsoleApplication: sample application
- FreeRTOS-Kernel: FreeRTOS kernel implementation
- copy_specific-files: script to copy source code from **FreeRTOS-Kernel** to **ConsoleApplication**

# How to use
1. *git clone --recurse-submodules git@github.com:danh21/FreeRTOS_demo.git* to clone repo with submodules
2. In **FreeRTOS-Kernel**/, you can checkout any tags (version of FreeRTOS kernel) for trial. I'm using version 11.2.0
3. In /**copy_specific-files**/, modify **filelist.txt** to include necessary source files. Then execute **cp_multiFiles.bat** to copy to **ConsoleApplication**.
4. In **ConsoleApplication**/, open **ConsoleApplication.sln** to go to simulation environment
5. On right side of IDE, in **Resource Files**, you can copy content in each demo file (*.txt) and paste to **main.c** in **Source Files**
6. Finally, you can build solution and run the simulation