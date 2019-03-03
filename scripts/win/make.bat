@echo off

SET BIN_DIR=..\..\bin
SET SRC_DIR=..\..\src

CALL C:\Xilinx\SDK\2017.4\settings64.bat

IF NOT EXIST %BIN_DIR% mkdir %BIN_DIR%

arm-linux-gnueabihf-gcc -lm %SRC_DIR%\main.c %SRC_DIR%\lidar.c -o %BIN_DIR%\lidar_stepm_app



