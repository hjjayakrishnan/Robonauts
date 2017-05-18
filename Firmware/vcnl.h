#ifndef _TOF_H_
#define _TOF_H_


#include <stdint.h>
#include <stdbool.h>
#include "em_device.h"
#include "em_chip.h"
#include "em_i2c.h"
#include "em_cmu.h"
#include "em_emu.h"
#include "em_gpio.h"
#include "em_int.h"
#include "i2c.h"

#define powerVCNLport gpioPortA
#define IRpowerport gpioPortA
#define powerVCNL1pin 8
#define powerVCNL2pin 9
#define IRpowerpin 10
void writeVCNL(uint8_t IR,uint8_t address,uint8_t value);
uint8_t readVCNL(uint8_t IR,uint8_t address);
void workVCNL(void);
void GPIO_VCNL(void);
typedef enum address_VCNL{
	CMD=0x80,
	RATE=0x82,
	FORCE_MSB=0x87,
	FORCE_LSB=0x88
}address_vcnl;
typedef enum value_VCNL{
	proximity=0x08,
	measure256=0x07

}value_vcnl;
#define VCNL1 1
#define VCNL2 2
#define SLAVE_VCNL 0x13<<1
uint8_t flag3,data2;
#endif
