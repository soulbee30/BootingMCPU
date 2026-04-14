# BootingMCPU
Bare-Metal STM32 Firmware Bring-Up with Custom Build System
### Bare-Metal STM32 Firmware Bring-Up with Custom Build System

This project demonstrates a complete bare-metal firmware bring-up for an ARM Cortex-M4 based microcontroller (STM32), built from scratch without using vendor libraries or RTOS.

The objective of this project is to understand the low-level boot process, memory initialization, and toolchain workflow involved in embedded systems development.

#### 🔧 Key Features

* Custom **startup code** written in ARM assembly

  * Vector table implementation
  * Reset handler execution flow
* Manual **.data and .bss initialization**

  * Copying initialized data from Flash to RAM
  * Zero-initialization of uninitialized variables
* Custom **linker script**

  * Memory mapping for Flash and RAM
  * Section placement control
* Lightweight **Makefile-based build system**

  * Compilation of C and assembly files
  * Object linking into ELF binary
* Integration with **OpenOCD and GDB**

  * Automated flashing and debugging
  * Breakpoint handling and step execution

#### 🧠 Concepts Explored

* ARM Cortex-M boot sequence
* Thumb instruction set behavior
* Linker symbols and memory sections
* Volatile memory access (hardware registers)
* Debugging using GDB and OpenOCD

#### ⚙️ Toolchain

* arm-none-eabi-gcc
* OpenOCD
* GDB

#### 🎯 Outcome

Successfully built, flashed, and debugged firmware on hardware, with execution verified up to the `main()` function using breakpoints.

This project provides a strong foundation for developing advanced embedded systems such as RTOS, device drivers, and hardware abstraction layers.

