# STM32 + cmake + vscode

This repository contains code to blink the on-board LED on a nucleoboard. I found a nucleoboard and I don't really like STMCubeIDE so decided to give this approach a try.

## Setup
1. STM32CubeMX to generate code and VSCode to edit it.
2. Cmake to compile and build the project.
3. `arm-none-eabi-gcc` the compiler used by Cmake.
4. `st-tools` to flash the STM32.

## Project Structure
1. Write a `.h` file first - which has a list of all the function that you will be defining.
2. Define that functions in the `.c` file with the same name
3. Call the functions in `main.c`
I have left a lot of comments throughtout. This is not intended to be production-ready code.

## How to build and flash
1. Make a build directory to save files: `mkdir build && cd build`
2. Tell cmake to generate the build system: `cmake ..`
3. Build the project: `cmake --build .` - don't forget the `.` at the end of the command
4. Flash the generated binary file on to the STM32: `st-flash write filename.bin 0x8000000`
