# Welcome to Wombat Linux
Wombat Linux is an operating system I have created on top of the Linux kernel. It runs on musl-libc and comes with a modified version of GCC along with the availability to install clang through its package manager, uspm. Instead of the GNU coreutils it comes with heirloom.

## What is done:

- musl-libc Is the lib-c available
- Heirloom has replaced GNU coreutils, making this system non-GNU in that sense
- The system is:
  - Bootable
  - Able to build more applications

## What needs to be done:

1. Installing USPM and its prerequisites to the core system
2. Make all software into USPM packages and make those available on the main website.
4. Shrink it down more as less tools are used/necessary
