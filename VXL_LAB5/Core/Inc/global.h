/*
 * global.h
 *
 *
 *
 */

#include "main.h"
#include "softwareTimer.h"

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#define MAX_SIZE_BUFFER 30

#define UART_WAIT 0
#define UART_RECEIVE 1

#define CMD_WAIT 10
#define CMD_PROCESS 11

extern uint8_t temp;
extern uint8_t buffer[MAX_SIZE_BUFFER];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;

extern int cmd_flag;
extern uint8_t cmd_data[MAX_SIZE_BUFFER];
extern uint8_t cmd_index;


extern int status_parser;
extern int status_uart;

extern uint8_t ADC_value;;
extern char str[16];

void ADC_Transmit();

#endif /* INC_GLOBAL_H_ */
