
#ifndef LIDAR_H_
#define LIDAR_H_

#include <stdio.h>
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <math.h>

#define INIT_TIME   10

#define LIDAR_APP "/media/scripts/step_with_lidar.sh"
#define LIDAR_OFF "/media/scripts/gpio.sh 0x8"
#define LIDAR_ON  "/media/scripts/gpio.sh 0xC"

#define PI              3.1415926
#define ONE_DEG_STEP 	8.88	// equal to 1 degree of step motor rotation 
                                // (mode: 1/16 step)

int UART_init(int*);
void send_command(char*, int);
void parse_and_send_command(char*, int);

#endif
