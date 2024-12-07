/*
 * global.c
 *
 *
 *
 */

#include "global.h"

uint8_t temp = 0;
uint8_t buffer[MAX_SIZE_BUFFER];
uint8_t index_buffer = 0;
uint8_t buffer_flag = 0;

int cmd_flag = 0;
uint8_t cmd_data[MAX_SIZE_BUFFER];
uint8_t cmd_index = 0;

int status_parser = 0;
int status_uart = 10;

uint8_t ADC_value = 0;
char str[16];


