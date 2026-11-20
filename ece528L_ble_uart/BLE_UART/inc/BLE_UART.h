/**
 * @file BLE_UART.h
 *
 * @brief Header file for the BLE_UART driver.
 *
 * This file contains the function definitions for the BLE_UART driver.
 *
 * It interfaces with the Adafruit Bluefruit LE UART Friend Bluetooth Low Energy (BLE) module, which uses the UART communication protocol.
 *  - Product Link: https://www.adafruit.com/product/2479
 *
 * The following connections must be made:
 *  - BLE UART MOD  (Pin 1)     <-->  MSP432 LaunchPad Pin P1.6
 *  - BLE UART CTS  (Pin 2)     <-->  MSP432 LaunchPad GND
 *  - BLE UART TXO  (Pin 3)     <-->  MSP432 LaunchPad Pin P9.6 (PM_UCA3RXD)
 *  - BLE UART RXI  (Pin 4)     <-->  MSP432 LaunchPad Pin P9.7 (PM_UCA3TXD)
 *  - BLE UART VIN  (Pin 5)     <-->  MSP432 LaunchPad VCC (3.3V)
 *  - BLE UART RTS  (Pin 6)     <-->  Not Connected
 *  - BLE UART GND  (Pin 7)     <-->  MSP432 LaunchPad GND
 *  - BLE UART DFU  (Pin 8)     <-->  Not Connected
 *
 * @note For more information regarding the Enhanced Universal Serial Communication Interface (eUSCI),
 * refer to the MSP432Pxx Microcontrollers Technical Reference Manual
 *
 * @author
 *
 */

#ifndef INC_BLE_UART_H_
#define INC_BLE_UART_H_

#include <stdint.h>
#include <string.h>
#include "msp.h"
#include "Clock.h"

/**
 *  @brief Specifies the size of the buffer used for the BLE UART module
 */
#define BLE_UART_BUFFER_SIZE 128

/**
 * @brief Carriage return character
 */
#define CR  0x0D
/**
 * @brief Line feed character
 */
#define LF  0x0A
/**
 * @brief Back space character
 */
#define BS  0x08
/**
 * @brief escape character
 */
#define ESC 0x1B
/**
 * @brief space character
 */
#define SP  0x20
/**
 * @brief delete character
 */
#define DEL 0x7F


/**
 * @brief Constructs a 32 bit load from the bluetooth UART.
 *
 * Reads in the data from the bluetooth and waits for the header before packaging the
 * data into a 32 bit int.
 *
 * @param None
 *
 * @return 32 bit representing the UART load transmitted by bluetooth
 */
uint32_t BLE_UART_InPacket(void);

/**
 * @brief Decodes the message transmitted by the bluetooth and completes the actions represented.
 *
 * The function checks the first 16 bits of the parameter to ensure that it is a valid
 * transmission before using a case statement on the last 16 bits to command different
 * motor functions.
 *
 * @param 32 bit representing the UART load transmitted by bluetooth
 *
 * @return None
 */
void Decode_Controller_Packet(uint32_t packet);


void BLE_UART_Init();

uint8_t BLE_UART_InChar();

void BLE_UART_OutChar(uint8_t data);

int BLE_UART_InString(char *buffer_pointer, uint16_t buffer_size);

void BLE_UART_OutString(char *pt);

uint8_t Check_BLE_UART_Data(char BLE_UART_Data_Buffer[], char *data_string);

void BLE_UART_Reset();

#endif /* INC_BLE_UART_H_ */
