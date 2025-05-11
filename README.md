# 📦 Project Name

> FreeRTOS demo.

---

## 📚 Table of Contents

- [📦 Project Name](#-project-name)
  - [📚 Table of Contents](#-table-of-contents)
  - [📝 About](#-about)
  - [✨ Features](#-features)
  - [🚀 Getting Started](#-getting-started)
    - [Prerequisites](#prerequisites)
    - [Source](#source)
    - [Usage](#usage)

---

## 📝 About

> Simulate demo operation of FreeRTOS.

---

## ✨ Features

- ✅ Co-operative scheduling

---

## 🚀 Getting Started

### Prerequisites

- List software dependencies or system requirements here:
  - FreeRTOS kernel
  - Microsoft Visual Studio

### Source

- ConsoleApplication: workspace of sample application
- ConsoleApplication/Demo: sample to run (*.log -> copy to main.c)
- ConsoleApplication/Log: log output
- FreeRTOS-Kernel: FreeRTOS kernel implementation
- copy_specific-files: script to copy source code from **FreeRTOS-Kernel** to **ConsoleApplication**

### Usage

1. *git clone --recurse-submodules git@github.com:danh21/FreeRTOS_demo.git* to clone repo with submodules
2. In **FreeRTOS-Kernel**/, you can checkout any tags (version of FreeRTOS kernel) for trial. I'm using version 11.2.0
3. In /**copy_specific-files**/, modify **filelist.txt** to include necessary source files. Then execute **cp_multiFiles.bat** to copy to **ConsoleApplication**.
4. In **ConsoleApplication**/, open **ConsoleApplication.sln** to go to simulation environment
5. On right side of IDE, in **Resource Files**, you can copy content in each demo file (*.log) and paste to **main.c** in **Source Files**
6. Finally, you can build solution and run the simulation
