/************************************************************************************
 * arch/arm/src/sam34/chip/sam3u_pinmap.h
 *
 *   Copyright (C) 2009-2011, 2013 Gregory Nutt. All rights reserved.
 *   Author: Gregory Nutt <gnutt@nuttx.org>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ************************************************************************************/

#ifndef __ARCH_ARM_SRC_SAM34_CHIP_SAM3U_PINMAP_H
#define __ARCH_ARM_SRC_SAM34_CHIP_SAM3U_PINMAP_H

/************************************************************************************
 * Included Files
 ************************************************************************************/

#include <tinyara/config.h>

#include "chip.h"
#include "sam_gpio.h"

/************************************************************************************
 * Definitions
 ************************************************************************************/
/* Alternate Pin Functions.
 *
 * Alternative pin selections are provided with a numeric suffix like _1, _2, etc.
 * Drivers, however, will use the pin selection without the numeric suffix.
 * Additional definitions are required in the board.h file.  For example, if
 * SPI MSIO connects vis PA21 on some board, then the following definition should
 * appear in the board.h header file for that board:
 *
 * #define GPIO_SPI_MISO GPIO_SPI_MISO_1
 *
 * The driver will then automatically configre PA21 as the SPI MISO pin.
 */

/* WARNING!!! WARNING!!! WARNING!!! WARNING!!! WARNING!!! WARNING!!! WARNING!!!
 * Additional effort is required to select specific GPIO options such as frequency,
 * open-drain/push-pull, and pull-up/down!  Just the basics are defined for most
 * pins in this file.
 */

/*  Audio Bitstream DAC */

#define GPIO_ABDACB_CLK_1     (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN31)
#define GPIO_ABDACB_CLK_2     (GPIO_FUNCC | GPIO_PORTC | GPIO_PIN12)
#define GPIO_ABDACB_DAC0_1    (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN17)
#define GPIO_ABDACB_DAC0_2    (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN27)
#define GPIO_ABDACB_DAC0_3    (GPIO_FUNCC | GPIO_PORTB | GPIO_PIN2)
#define GPIO_ABDACB_DAC0_4    (GPIO_FUNCC | GPIO_PORTC | GPIO_PIN9)
#define GPIO_ABDACB_DAC1_1    (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN19)
#define GPIO_ABDACB_DAC1_2    (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN29)
#define GPIO_ABDACB_DAC1_3    (GPIO_FUNCC | GPIO_PORTB | GPIO_PIN4)
#define GPIO_ABDACB_DAC1_4    (GPIO_FUNCC | GPIO_PORTC | GPIO_PIN13)
#define GPIO_ABDACB_DACN0_1   (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN18)
#define GPIO_ABDACB_DACN0_2   (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN28)
#define GPIO_ABDACB_DACN0_3   (GPIO_FUNCC | GPIO_PORTB | GPIO_PIN3)
#define GPIO_ABDACB_DACN0_4   (GPIO_FUNCC | GPIO_PORTC | GPIO_PIN10)
#define GPIO_ABDACB_DACN1_1   (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN20)
#define GPIO_ABDACB_DACN1_2   (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN30)
#define GPIO_ABDACB_DACN1_3   (GPIO_FUNCC | GPIO_PORTB | GPIO_PIN5)
#define GPIO_ABDACB_DACN1_4   (GPIO_FUNCC | GPIO_PORTC | GPIO_PIN14)

/*  Analog Comparator Interface */

#define GPIO_ACIFC_ACAN0       (GPIO_FUNCE | GPIO_PORTA | GPIO_PIN6)
#define GPIO_ACIFC_ACAN1       (GPIO_FUNCE | GPIO_PORTC | GPIO_PIN9)
#define GPIO_ACIFC_ACAP0       (GPIO_FUNCE | GPIO_PORTA | GPIO_PIN7)
#define GPIO_ACIFC_ACAP1       (GPIO_FUNCE | GPIO_PORTC | GPIO_PIN10)
#define GPIO_ACIFC_ACBN0       (GPIO_FUNCE | GPIO_PORTB | GPIO_PIN2)
#define GPIO_ACIFC_ACBN1       (GPIO_FUNCE | GPIO_PORTC | GPIO_PIN13)
#define GPIO_ACIFC_ACBP0       (GPIO_FUNCE | GPIO_PORTB | GPIO_PIN3)
#define GPIO_ACIFC_ACBP1       (GPIO_FUNCE | GPIO_PORTC | GPIO_PIN14)

/* ADC controller interface  */

#define GPIO_ADCIFE_AD0        (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN4)
#define GPIO_ADCIFE_AD1        (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN5)
#define GPIO_ADCIFE_AD2        (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN7)
#define GPIO_ADCIFE_AD3        (GPIO_FUNCA | GPIO_PORTB | GPIO_PIN2)
#define GPIO_ADCIFE_AD4        (GPIO_FUNCA | GPIO_PORTB | GPIO_PIN3)
#define GPIO_ADCIFE_AD5        (GPIO_FUNCA | GPIO_PORTB | GPIO_PIN4)
#define GPIO_ADCIFE_AD6        (GPIO_FUNCA | GPIO_PORTB | GPIO_PIN5)
#define GPIO_ADCIFE_AD7        (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN7)
#define GPIO_ADCIFE_AD8        (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN8)
#define GPIO_ADCIFE_AD9        (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN9)
#define GPIO_ADCIFE_AD10       (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN10)
#define GPIO_ADCIFE_AD11       (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN11)
#define GPIO_ADCIFE_AD12       (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN12)
#define GPIO_ADCIFE_AD13       (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN13)
#define GPIO_ADCIFE_AD14       (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN14)
#define GPIO_ADCIFE_TRIGGER    (GPIO_FUNCE | GPIO_PORTA | GPIO_PIN5)

/*  Capacitive Touch Module B */

#define GPIO_CATB_DIS_1        (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN12)
#define GPIO_CATB_DIS_2        (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN2)
#define GPIO_CATB_DIS_3        (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN23)
#define GPIO_CATB_DIS_4        (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN31)
#define GPIO_CATB_DIS_5        (GPIO_FUNCG | GPIO_PORTB | GPIO_PIN12)
#define GPIO_CATB_DIS_6        (GPIO_FUNCG | GPIO_PORTB | GPIO_PIN3)
#define GPIO_CATB_DIS_7        (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN14)
#define GPIO_CATB_DIS_8        (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN23)
#define GPIO_CATB_DIS_9        (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN5)
#define GPIO_CATB_SENSE0_1     (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN27)
#define GPIO_CATB_SENSE0_2     (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN4)
#define GPIO_CATB_SENSE0_3     (GPIO_FUNCG | GPIO_PORTB | GPIO_PIN13)
#define GPIO_CATB_SENSE1_1     (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN28)
#define GPIO_CATB_SENSE1_2     (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN5)
#define GPIO_CATB_SENSE1_3     (GPIO_FUNCG | GPIO_PORTB | GPIO_PIN14)
#define GPIO_CATB_SENSE2_1     (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN29)
#define GPIO_CATB_SENSE2_2     (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN6)
#define GPIO_CATB_SENSE2_3     (GPIO_FUNCG | GPIO_PORTB | GPIO_PIN15)
#define GPIO_CATB_SENSE3_1     (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN30)
#define GPIO_CATB_SENSE3_2     (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN7)
#define GPIO_CATB_SENSE3_3     (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN0)
#define GPIO_CATB_SENSE4_1     (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN8)
#define GPIO_CATB_SENSE4_2     (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN1)
#define GPIO_CATB_SENSE5_1     (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN9)
#define GPIO_CATB_SENSE5_2     (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN2)
#define GPIO_CATB_SENSE6_1     (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN10)
#define GPIO_CATB_SENSE6_2     (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN3)
#define GPIO_CATB_SENSE7_1     (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN11)
#define GPIO_CATB_SENSE7_2     (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN4)
#define GPIO_CATB_SENSE8_1     (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN13)
#define GPIO_CATB_SENSE8_2     (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN6)
#define GPIO_CATB_SENSE9_1     (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN14)
#define GPIO_CATB_SENSE9_2     (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN7)
#define GPIO_CATB_SENSE10_1    (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN15)
#define GPIO_CATB_SENSE10_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN8)
#define GPIO_CATB_SENSE11_1    (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN16)
#define GPIO_CATB_SENSE11_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN9)
#define GPIO_CATB_SENSE12_1    (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN17)
#define GPIO_CATB_SENSE12_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN10)
#define GPIO_CATB_SENSE13_1    (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN18)
#define GPIO_CATB_SENSE13_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN11)
#define GPIO_CATB_SENSE14_1    (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN19)
#define GPIO_CATB_SENSE14_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN12)
#define GPIO_CATB_SENSE15_1    (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN20)
#define GPIO_CATB_SENSE15_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN13)
#define GPIO_CATB_SENSE16_1    (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN21)
#define GPIO_CATB_SENSE16_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN15)
#define GPIO_CATB_SENSE17_1    (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN22)
#define GPIO_CATB_SENSE17_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN16)
#define GPIO_CATB_SENSE18_1    (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN24)
#define GPIO_CATB_SENSE18_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN17)
#define GPIO_CATB_SENSE19_1    (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN25)
#define GPIO_CATB_SENSE19_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN18)
#define GPIO_CATB_SENSE20_1    (GPIO_FUNCG | GPIO_PORTA | GPIO_PIN26)
#define GPIO_CATB_SENSE20_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN19)
#define GPIO_CATB_SENSE21_1    (GPIO_FUNCG | GPIO_PORTB | GPIO_PIN0)
#define GPIO_CATB_SENSE21_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN20)
#define GPIO_CATB_SENSE22_1    (GPIO_FUNCG | GPIO_PORTB | GPIO_PIN1)
#define GPIO_CATB_SENSE22_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN21)
#define GPIO_CATB_SENSE23_1    (GPIO_FUNCG | GPIO_PORTB | GPIO_PIN2)
#define GPIO_CATB_SENSE23_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN22)
#define GPIO_CATB_SENSE24_1    (GPIO_FUNCG | GPIO_PORTB | GPIO_PIN4)
#define GPIO_CATB_SENSE24_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN24)
#define GPIO_CATB_SENSE25_1    (GPIO_FUNCG | GPIO_PORTB | GPIO_PIN5)
#define GPIO_CATB_SENSE25_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN25)
#define GPIO_CATB_SENSE26_1    (GPIO_FUNCG | GPIO_PORTB | GPIO_PIN6)
#define GPIO_CATB_SENSE26_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN26)
#define GPIO_CATB_SENSE27_1    (GPIO_FUNCG | GPIO_PORTB | GPIO_PIN7)
#define GPIO_CATB_SENSE27_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN27)
#define GPIO_CATB_SENSE28_1    (GPIO_FUNCG | GPIO_PORTB | GPIO_PIN8)
#define GPIO_CATB_SENSE28_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN28)
#define GPIO_CATB_SENSE29_1    (GPIO_FUNCG | GPIO_PORTB | GPIO_PIN9)
#define GPIO_CATB_SENSE29_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN29)
#define GPIO_CATB_SENSE30_1    (GPIO_FUNCG | GPIO_PORTB | GPIO_PIN10)
#define GPIO_CATB_SENSE30_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN30)
#define GPIO_CATB_SENSE31_1    (GPIO_FUNCG | GPIO_PORTB | GPIO_PIN11)
#define GPIO_CATB_SENSE31_2    (GPIO_FUNCG | GPIO_PORTC | GPIO_PIN31)

/* DAC Controller */

#define GPIO_DACC_EXT_TRIG0    (GPIO_FUNCE | GPIO_PORTB | GPIO_PIN4)
#define GPIO_DACC_VOUT         (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN6)
#define GPIO_EIC_EXTINT0       (GPIO_FUNCC | GPIO_PORTB | GPIO_PIN1)
#define GPIO_EIC_EXTINT1_1     (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN24)
#define GPIO_EIC_EXTINT1_2     (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN16)
#define GPIO_EIC_EXTINT1_3     (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN6)
#define GPIO_EIC_EXTINT2_1     (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN25)
#define GPIO_EIC_EXTINT2_2     (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN17)
#define GPIO_EIC_EXTINT2_3     (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN4)
#define GPIO_EIC_EXTINT3_1     (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN26)
#define GPIO_EIC_EXTINT3_2     (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN18)
#define GPIO_EIC_EXTINT3_3     (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN5)
#define GPIO_EIC_EXTINT4_1     (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN27)
#define GPIO_EIC_EXTINT4_2     (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN19)
#define GPIO_EIC_EXTINT4_3     (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN7)
#define GPIO_EIC_EXTINT5_1     (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN3)
#define GPIO_EIC_EXTINT5_2     (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN20)
#define GPIO_EIC_EXTINT6_1     (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN4)
#define GPIO_EIC_EXTINT6_2     (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN21)
#define GPIO_EIC_EXTINT7_1     (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN5)
#define GPIO_EIC_EXTINT7_2     (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN22)
#define GPIO_EIC_EXTINT8_1     (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN6)
#define GPIO_EIC_EXTINT8_2     (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN23)

/* Glue Logic Controller */

#define GPIO_GLOC_IN0_1        (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN20)
#define GPIO_GLOC_IN0_2        (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN6)
#define GPIO_GLOC_IN1_1        (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN21)
#define GPIO_GLOC_IN1_2        (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN4)
#define GPIO_GLOC_IN2_1        (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN22)
#define GPIO_GLOC_IN2_2        (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN5)
#define GPIO_GLOC_IN3_1        (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN23)
#define GPIO_GLOC_IN3_2        (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN7)
#define GPIO_GLOC_IN4_1        (GPIO_FUNCC | GPIO_PORTB | GPIO_PIN6)
#define GPIO_GLOC_IN4_2        (GPIO_FUNCC | GPIO_PORTC | GPIO_PIN28)
#define GPIO_GLOC_IN4_3        (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN27)
#define GPIO_GLOC_IN4_4        (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN15)
#define GPIO_GLOC_IN5_1        (GPIO_FUNCC | GPIO_PORTB | GPIO_PIN7)
#define GPIO_GLOC_IN5_2        (GPIO_FUNCC | GPIO_PORTC | GPIO_PIN29)
#define GPIO_GLOC_IN5_3        (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN28)
#define GPIO_GLOC_IN5_4        (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN16)
#define GPIO_GLOC_IN6_1        (GPIO_FUNCC | GPIO_PORTB | GPIO_PIN8)
#define GPIO_GLOC_IN6_2        (GPIO_FUNCC | GPIO_PORTC | GPIO_PIN30)
#define GPIO_GLOC_IN6_3        (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN29)
#define GPIO_GLOC_IN6_4        (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN17)
#define GPIO_GLOC_IN7_1        (GPIO_FUNCC | GPIO_PORTB | GPIO_PIN9)
#define GPIO_GLOC_IN7_2        (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN30)
#define GPIO_GLOC_IN7_3        (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN18)
#define GPIO_GLOC_OUT0_1       (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN24)
#define GPIO_GLOC_OUT0_2       (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN8)
#define GPIO_GLOC_OUT1_1       (GPIO_FUNCC | GPIO_PORTB | GPIO_PIN10)
#define GPIO_GLOC_OUT1_2       (GPIO_FUNCC | GPIO_PORTC | GPIO_PIN31)
#define GPIO_GLOC_OUT1_3       (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN31)
#define GPIO_GLOC_OUT1_4       (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN19)

/* Inter-IC Sound (I2S) Controller */

#define GPIO_IISC_IMCK_1       (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN31)
#define GPIO_IISC_IMCK_2       (GPIO_FUNCD | GPIO_PORTB | GPIO_PIN5)
#define GPIO_IISC_IMCK_3       (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN14)
#define GPIO_IISC_ISCK_1       (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN27)
#define GPIO_IISC_ISCK_2       (GPIO_FUNCD | GPIO_PORTB | GPIO_PIN2)
#define GPIO_IISC_ISCK_3       (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN9)
#define GPIO_IISC_ISDI_1       (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN28)
#define GPIO_IISC_ISDI_2       (GPIO_FUNCD | GPIO_PORTB | GPIO_PIN3)
#define GPIO_IISC_ISDI_3       (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN10)
#define GPIO_IISC_ISDO_1       (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN30)
#define GPIO_IISC_ISDO_2       (GPIO_FUNCD | GPIO_PORTB | GPIO_PIN4)
#define GPIO_IISC_ISDO_3       (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN13)
#define GPIO_IISC_IWS_1        (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN29)
#define GPIO_IISC_IWS_2        (GPIO_FUNCD | GPIO_PORTB | GPIO_PIN6)
#define GPIO_IISC_IWS_3        (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN12)

/* LCD Controller A */

#define GPIO_LCDCA_COM0        (GPIO_FUNCF | GPIO_PORTA | GPIO_PIN12)
#define GPIO_LCDCA_COM1        (GPIO_FUNCF | GPIO_PORTA | GPIO_PIN11)
#define GPIO_LCDCA_COM2        (GPIO_FUNCF | GPIO_PORTA | GPIO_PIN10)
#define GPIO_LCDCA_COM3        (GPIO_FUNCF | GPIO_PORTA | GPIO_PIN9)
#define GPIO_LCDCA_SEG0        (GPIO_FUNCF | GPIO_PORTC | GPIO_PIN15)
#define GPIO_LCDCA_SEG1        (GPIO_FUNCF | GPIO_PORTC | GPIO_PIN16)
#define GPIO_LCDCA_SEG2        (GPIO_FUNCF | GPIO_PORTC | GPIO_PIN17)
#define GPIO_LCDCA_SEG3        (GPIO_FUNCF | GPIO_PORTC | GPIO_PIN18)
#define GPIO_LCDCA_SEG4        (GPIO_FUNCF | GPIO_PORTC | GPIO_PIN19)
#define GPIO_LCDCA_SEG5        (GPIO_FUNCF | GPIO_PORTA | GPIO_PIN13)
#define GPIO_LCDCA_SEG6        (GPIO_FUNCF | GPIO_PORTA | GPIO_PIN14)
#define GPIO_LCDCA_SEG7        (GPIO_FUNCF | GPIO_PORTA | GPIO_PIN15)
#define GPIO_LCDCA_SEG8        (GPIO_FUNCF | GPIO_PORTA | GPIO_PIN16)
#define GPIO_LCDCA_SEG9        (GPIO_FUNCF | GPIO_PORTA | GPIO_PIN17)
#define GPIO_LCDCA_SEG10       (GPIO_FUNCF | GPIO_PORTC | GPIO_PIN20)
#define GPIO_LCDCA_SEG11       (GPIO_FUNCF | GPIO_PORTC | GPIO_PIN21)
#define GPIO_LCDCA_SEG12       (GPIO_FUNCF | GPIO_PORTC | GPIO_PIN22)
#define GPIO_LCDCA_SEG13       (GPIO_FUNCF | GPIO_PORTC | GPIO_PIN23)
#define GPIO_LCDCA_SEG14       (GPIO_FUNCF | GPIO_PORTB | GPIO_PIN8)
#define GPIO_LCDCA_SEG15       (GPIO_FUNCF | GPIO_PORTB | GPIO_PIN9)
#define GPIO_LCDCA_SEG16       (GPIO_FUNCF | GPIO_PORTB | GPIO_PIN10)
#define GPIO_LCDCA_SEG17       (GPIO_FUNCF | GPIO_PORTB | GPIO_PIN11)
#define GPIO_LCDCA_SEG18       (GPIO_FUNCF | GPIO_PORTA | GPIO_PIN18)
#define GPIO_LCDCA_SEG19       (GPIO_FUNCF | GPIO_PORTA | GPIO_PIN19)
#define GPIO_LCDCA_SEG20       (GPIO_FUNCF | GPIO_PORTA | GPIO_PIN20)
#define GPIO_LCDCA_SEG21       (GPIO_FUNCF | GPIO_PORTB | GPIO_PIN7)
#define GPIO_LCDCA_SEG22       (GPIO_FUNCF | GPIO_PORTB | GPIO_PIN6)
#define GPIO_LCDCA_SEG23       (GPIO_FUNCF | GPIO_PORTA | GPIO_PIN8)
#define GPIO_LCDCA_SEG24       (GPIO_FUNCF | GPIO_PORTC | GPIO_PIN24)
#define GPIO_LCDCA_SEG25       (GPIO_FUNCF | GPIO_PORTC | GPIO_PIN25)
#define GPIO_LCDCA_SEG26       (GPIO_FUNCF | GPIO_PORTC | GPIO_PIN26)
#define GPIO_LCDCA_SEG27       (GPIO_FUNCF | GPIO_PORTC | GPIO_PIN27)
#define GPIO_LCDCA_SEG28       (GPIO_FUNCF | GPIO_PORTC | GPIO_PIN28)
#define GPIO_LCDCA_SEG29       (GPIO_FUNCF | GPIO_PORTC | GPIO_PIN29)
#define GPIO_LCDCA_SEG30       (GPIO_FUNCF | GPIO_PORTC | GPIO_PIN30)
#define GPIO_LCDCA_SEG31       (GPIO_FUNCF | GPIO_PORTC | GPIO_PIN31)
#define GPIO_LCDCA_SEG32       (GPIO_FUNCF | GPIO_PORTB | GPIO_PIN12)
#define GPIO_LCDCA_SEG33       (GPIO_FUNCF | GPIO_PORTB | GPIO_PIN13)
#define GPIO_LCDCA_SEG34       (GPIO_FUNCF | GPIO_PORTA | GPIO_PIN21)
#define GPIO_LCDCA_SEG35       (GPIO_FUNCF | GPIO_PORTA | GPIO_PIN22)
#define GPIO_LCDCA_SEG36       (GPIO_FUNCF | GPIO_PORTB | GPIO_PIN14)
#define GPIO_LCDCA_SEG37       (GPIO_FUNCF | GPIO_PORTB | GPIO_PIN15)
#define GPIO_LCDCA_SEG38       (GPIO_FUNCF | GPIO_PORTA | GPIO_PIN23)
#define GPIO_LCDCA_SEG39       (GPIO_FUNCF | GPIO_PORTA | GPIO_PIN24)

/* Parallel Capture */

#define GPIO_PARC_PCCK_1       (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN17)
#define GPIO_PARC_PCCK_2       (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN21)
#define GPIO_PARC_PCDATA0_1    (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN9)
#define GPIO_PARC_PCDATA0_2    (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN24)
#define GPIO_PARC_PCDATA1_1    (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN10)
#define GPIO_PARC_PCDATA1_2    (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN25)
#define GPIO_PARC_PCDATA2_1    (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN11)
#define GPIO_PARC_PCDATA2_2    (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN26)
#define GPIO_PARC_PCDATA3_1    (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN12)
#define GPIO_PARC_PCDATA3_2    (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN27)
#define GPIO_PARC_PCDATA4_1    (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN13)
#define GPIO_PARC_PCDATA4_2    (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN28)
#define GPIO_PARC_PCDATA5_1    (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN14)
#define GPIO_PARC_PCDATA5_2    (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN29)
#define GPIO_PARC_PCDATA6_1    (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN15)
#define GPIO_PARC_PCDATA6_2    (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN30)
#define GPIO_PARC_PCDATA7_1    (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN16)
#define GPIO_PARC_PCDATA7_2    (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN31)
#define GPIO_PARC_PCEN1_1      (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN18)
#define GPIO_PARC_PCEN1_2      (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN22)
#define GPIO_PARC_PCEN2_1      (GPIO_FUNCD | GPIO_PORTA | GPIO_PIN19)
#define GPIO_PARC_PCEN2_2      (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN23)

/* Peripheral Event Controller */

#define GPIO_PEVC_PAD_EVT0_1   (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN8)
#define GPIO_PEVC_PAD_EVT0_2   (GPIO_FUNCC | GPIO_PORTB | GPIO_PIN12)
#define GPIO_PEVC_PAD_EVT0_3   (GPIO_FUNCC | GPIO_PORTC | GPIO_PIN24)
#define GPIO_PEVC_PAD_EVT0_4   (GPIO_FUNCC | GPIO_PORTC | GPIO_PIN7)
#define GPIO_PEVC_PAD_EVT1_1   (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN9)
#define GPIO_PEVC_PAD_EVT1_2   (GPIO_FUNCC | GPIO_PORTB | GPIO_PIN13)
#define GPIO_PEVC_PAD_EVT1_3   (GPIO_FUNCC | GPIO_PORTC | GPIO_PIN25)
#define GPIO_PEVC_PAD_EVT1_4   (GPIO_FUNCC | GPIO_PORTC | GPIO_PIN8)
#define GPIO_PEVC_PAD_EVT2_1   (GPIO_FUNCB | GPIO_PORTB | GPIO_PIN9)
#define GPIO_PEVC_PAD_EVT2_2   (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN10)
#define GPIO_PEVC_PAD_EVT2_3   (GPIO_FUNCC | GPIO_PORTC | GPIO_PIN11)
#define GPIO_PEVC_PAD_EVT2_4   (GPIO_FUNCC | GPIO_PORTC | GPIO_PIN26)
#define GPIO_PEVC_PAD_EVT3_1   (GPIO_FUNCB | GPIO_PORTB | GPIO_PIN10)
#define GPIO_PEVC_PAD_EVT3_2   (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN11)
#define GPIO_PEVC_PAD_EVT3_3   (GPIO_FUNCC | GPIO_PORTC | GPIO_PIN27)

/* System Control Interface */

#define GPIO_SCIF_GCLK0_1      (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN2)
#define GPIO_SCIF_GCLK0_2      (GPIO_FUNCE | GPIO_PORTA | GPIO_PIN19)
#define GPIO_SCIF_GCLK0_3      (GPIO_FUNCE | GPIO_PORTB | GPIO_PIN10)
#define GPIO_SCIF_GCLK0_4      (GPIO_FUNCE | GPIO_PORTC | GPIO_PIN26)
#define GPIO_SCIF_GCLK1_1      (GPIO_FUNCE | GPIO_PORTA | GPIO_PIN20)
#define GPIO_SCIF_GCLK1_2      (GPIO_FUNCE | GPIO_PORTB | GPIO_PIN11)
#define GPIO_SCIF_GCLK1_3      (GPIO_FUNCE | GPIO_PORTC | GPIO_PIN27)
#define GPIO_SCIF_GCLK2_1      (GPIO_FUNCE | GPIO_PORTB | GPIO_PIN12)
#define GPIO_SCIF_GCLK2_2      (GPIO_FUNCE | GPIO_PORTC | GPIO_PIN28)
#define GPIO_SCIF_GCLK3_1      (GPIO_FUNCE | GPIO_PORTB | GPIO_PIN13)
#define GPIO_SCIF_GCLK3_2      (GPIO_FUNCE | GPIO_PORTC | GPIO_PIN29)
#define GPIO_SCIF_GCLK_IN0_1   (GPIO_FUNCE | GPIO_PORTA | GPIO_PIN23)
#define GPIO_SCIF_GCLK_IN0_2   (GPIO_FUNCE | GPIO_PORTB | GPIO_PIN14)
#define GPIO_SCIF_GCLK_IN0_3   (GPIO_FUNCE | GPIO_PORTC | GPIO_PIN30)
#define GPIO_SCIF_GCLK_IN1_1   (GPIO_FUNCE | GPIO_PORTA | GPIO_PIN24)
#define GPIO_SCIF_GCLK_IN1_2   (GPIO_FUNCE | GPIO_PORTB | GPIO_PIN15)
#define GPIO_SCIF_GCLK_IN1_3   (GPIO_FUNCE | GPIO_PORTC | GPIO_PIN31)

/* Serial Peripheral Interface */

#define GPIO_SPI0_MISO_1       (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN21)
#define GPIO_SPI0_MISO_2       (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN27)
#define GPIO_SPI0_MISO_3       (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN4)
#define GPIO_SPI0_MISO_4       (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN3)
#define GPIO_SPI0_MISO_5       (GPIO_FUNCB | GPIO_PORTB | GPIO_PIN14)
#define GPIO_SPI0_MISO_6       (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN28)
#define GPIO_SPI0_MOSI_1       (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN22)
#define GPIO_SPI0_MOSI_2       (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN28)
#define GPIO_SPI0_MOSI_3       (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN5)
#define GPIO_SPI0_MOSI_4       (GPIO_FUNCB | GPIO_PORTB | GPIO_PIN15)
#define GPIO_SPI0_MOSI_5       (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN29)
#define GPIO_SPI0_NPCS0_1      (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN24)
#define GPIO_SPI0_NPCS0_2      (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN30)
#define GPIO_SPI0_NPCS0_3      (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN3)
#define GPIO_SPI0_NPCS0_4      (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN2)
#define GPIO_SPI0_NPCS0_5      (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN31)
#define GPIO_SPI0_NPCS1_1      (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN31)
#define GPIO_SPI0_NPCS1_2      (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN2)
#define GPIO_SPI0_NPCS1_3      (GPIO_FUNCB | GPIO_PORTB | GPIO_PIN13)
#define GPIO_SPI0_NPCS1_4      (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN13)
#define GPIO_SPI0_NPCS2_1      (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN0)
#define GPIO_SPI0_NPCS2_2      (GPIO_FUNCB | GPIO_PORTB | GPIO_PIN11)
#define GPIO_SPI0_NPCS2_3      (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN14)
#define GPIO_SPI0_NPCS3_1      (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN1)
#define GPIO_SPI0_NPCS3_2      (GPIO_FUNCB | GPIO_PORTB | GPIO_PIN12)
#define GPIO_SPI0_NPCS3_3      (GPIO_FUNCC | GPIO_PORTA | GPIO_PIN15)
#define GPIO_SPI0_SPCK_1       (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN23)
#define GPIO_SPI0_SPCK_2       (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN29)
#define GPIO_SPI0_SPCK_3       (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN6)
#define GPIO_SPI0_SPCK_4       (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN30)

/* Timer/Counters */

#define GPIO_TC0_A0_1          (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN8)
#define GPIO_TC0_A0_2          (GPIO_FUNCD | GPIO_PORTB | GPIO_PIN7)
#define GPIO_TC0_A1_1          (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN10)
#define GPIO_TC0_A1_2          (GPIO_FUNCD | GPIO_PORTB | GPIO_PIN9)
#define GPIO_TC0_A2_1          (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN12)
#define GPIO_TC0_A2_2          (GPIO_FUNCD | GPIO_PORTB | GPIO_PIN11)
#define GPIO_TC0_B0_1          (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN9)
#define GPIO_TC0_B0_2          (GPIO_FUNCD | GPIO_PORTB | GPIO_PIN8)
#define GPIO_TC0_B1_1          (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN11)
#define GPIO_TC0_B1_2          (GPIO_FUNCD | GPIO_PORTB | GPIO_PIN10)
#define GPIO_TC0_B2_1          (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN13)
#define GPIO_TC0_B2_2          (GPIO_FUNCD | GPIO_PORTB | GPIO_PIN12)
#define GPIO_TC0_CLK0_1        (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN14)
#define GPIO_TC0_CLK0_2        (GPIO_FUNCD | GPIO_PORTB | GPIO_PIN13)
#define GPIO_TC0_CLK1_1        (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN15)
#define GPIO_TC0_CLK1_2        (GPIO_FUNCD | GPIO_PORTB | GPIO_PIN14)
#define GPIO_TC0_CLK2_1        (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN16)
#define GPIO_TC0_CLK2_2        (GPIO_FUNCD | GPIO_PORTB | GPIO_PIN15)

#define GPIO_TC1_A0_1          (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN15)
#define GPIO_TC1_A0_2          (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN0)
#define GPIO_TC1_A1_1          (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN17)
#define GPIO_TC1_A1_2          (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN2)
#define GPIO_TC1_A2_1          (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN19)
#define GPIO_TC1_A2_2          (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN4)
#define GPIO_TC1_B0_1          (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN16)
#define GPIO_TC1_B0_2          (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN1)
#define GPIO_TC1_B1_1          (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN18)
#define GPIO_TC1_B1_2          (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN3)
#define GPIO_TC1_B2_1          (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN20)
#define GPIO_TC1_B2_2          (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN5)
#define GPIO_TC1_CLK0_1        (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN21)
#define GPIO_TC1_CLK0_2        (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN6)
#define GPIO_TC1_CLK1_1        (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN22)
#define GPIO_TC1_CLK1_2        (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN7)
#define GPIO_TC1_CLK2_1        (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN23)
#define GPIO_TC1_CLK2_2        (GPIO_FUNCD | GPIO_PORTC | GPIO_PIN8)

/* Two-wire Master Interface */

#define GPIO_TWIM2_TWCK      (GPIO_FUNCE | GPIO_PORTA | GPIO_PIN22)
#define GPIO_TWIM2_TWD       (GPIO_FUNCE | GPIO_PORTA | GPIO_PIN21)
#define GPIO_TWIM3_TWCK      (GPIO_FUNCC | GPIO_PORTB | GPIO_PIN15)
#define GPIO_TWIM3_TWD       (GPIO_FUNCC | GPIO_PORTB | GPIO_PIN14)
#define GPIO_TWIMS0_TWCK     (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN24)
#define GPIO_TWIMS0_TWD      (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN23)
#define GPIO_TWIMS1_TWCK     (GPIO_FUNCA | GPIO_PORTB | GPIO_PIN1)
#define GPIO_TWIMS1_TWD      (GPIO_FUNCA | GPIO_PORTB | GPIO_PIN0)

/* USARTs */

#define GPIO_USART0_CLK_1      (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN10)
#define GPIO_USART0_CLK_2      (GPIO_FUNCA | GPIO_PORTB | GPIO_PIN13)
#define GPIO_USART0_CLK_3      (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN4)
#define GPIO_USART0_CLK_4      (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN0)
#define GPIO_USART0_CTS_1      (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN9)
#define GPIO_USART0_CTS_2      (GPIO_FUNCA | GPIO_PORTB | GPIO_PIN11)
#define GPIO_USART0_CTS_3      (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN2)
#define GPIO_USART0_RTS_1      (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN8)
#define GPIO_USART0_RTS_2      (GPIO_FUNCA | GPIO_PORTB | GPIO_PIN12)
#define GPIO_USART0_RTS_3      (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN6)
#define GPIO_USART0_RTS_4      (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN1)
#define GPIO_USART0_RXD_1      (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN11)
#define GPIO_USART0_RXD_2      (GPIO_FUNCA | GPIO_PORTB | GPIO_PIN14)
#define GPIO_USART0_RXD_3      (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN5)
#define GPIO_USART0_RXD_4      (GPIO_FUNCB | GPIO_PORTB | GPIO_PIN0)
#define GPIO_USART0_RXD_5      (GPIO_FUNCC | GPIO_PORTC | GPIO_PIN2)
#define GPIO_USART0_TXD_1      (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN12)
#define GPIO_USART0_TXD_2      (GPIO_FUNCA | GPIO_PORTB | GPIO_PIN15)
#define GPIO_USART0_TXD_3      (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN7)
#define GPIO_USART0_TXD_4      (GPIO_FUNCB | GPIO_PORTB | GPIO_PIN1)
#define GPIO_USART0_TXD_5      (GPIO_FUNCC | GPIO_PORTC | GPIO_PIN3)

#define GPIO_USART1_CLK_1      (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN14)
#define GPIO_USART1_CLK_2      (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN25)
#define GPIO_USART1_CLK_3      (GPIO_FUNCB | GPIO_PORTB | GPIO_PIN3)
#define GPIO_USART1_CTS        (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN21)
#define GPIO_USART1_RTS_1      (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN13)
#define GPIO_USART1_RTS_2      (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN24)
#define GPIO_USART1_RTS_3      (GPIO_FUNCB | GPIO_PORTB | GPIO_PIN2)
#define GPIO_USART1_RXD_1      (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN15)
#define GPIO_USART1_RXD_2      (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN26)
#define GPIO_USART1_RXD_3      (GPIO_FUNCB | GPIO_PORTB | GPIO_PIN4)
#define GPIO_USART1_TXD_1      (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN16)
#define GPIO_USART1_TXD_2      (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN27)
#define GPIO_USART1_TXD_3      (GPIO_FUNCB | GPIO_PORTB | GPIO_PIN5)

#define GPIO_USART2_CLK_1      (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN18)
#define GPIO_USART2_CLK_2      (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN8)
#define GPIO_USART2_CTS_1      (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN22)
#define GPIO_USART2_CTS_2      (GPIO_FUNCE | GPIO_PORTC | GPIO_PIN8)
#define GPIO_USART2_RTS_1      (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN17)
#define GPIO_USART2_RTS_2      (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN7)
#define GPIO_USART2_RXD_1      (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN19)
#define GPIO_USART2_RXD_2      (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN25)
#define GPIO_USART2_RXD_3      (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN11)
#define GPIO_USART2_TXD_1      (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN20)
#define GPIO_USART2_TXD_2      (GPIO_FUNCB | GPIO_PORTA | GPIO_PIN26)
#define GPIO_USART2_TXD_3      (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN12)

#define GPIO_USART3_CLK_1      (GPIO_FUNCA | GPIO_PORTB | GPIO_PIN8)
#define GPIO_USART3_CLK_2      (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN31)
#define GPIO_USART3_CLK_3      (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN14)
#define GPIO_USART3_CLK_4      (GPIO_FUNCE | GPIO_PORTA | GPIO_PIN29)
#define GPIO_USART3_CTS_1      (GPIO_FUNCA | GPIO_PORTB | GPIO_PIN7)
#define GPIO_USART3_CTS_2      (GPIO_FUNCE | GPIO_PORTA | GPIO_PIN28)
#define GPIO_USART3_RTS_1      (GPIO_FUNCA | GPIO_PORTB | GPIO_PIN6)
#define GPIO_USART3_RTS_2      (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN30)
#define GPIO_USART3_RTS_3      (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN13)
#define GPIO_USART3_RTS_4      (GPIO_FUNCE | GPIO_PORTA | GPIO_PIN27)
#define GPIO_USART3_RXD_1      (GPIO_FUNCA | GPIO_PORTB | GPIO_PIN9)
#define GPIO_USART3_RXD_2      (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN28)
#define GPIO_USART3_RXD_3      (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN9)
#define GPIO_USART3_RXD_4      (GPIO_FUNCE | GPIO_PORTA | GPIO_PIN30)
#define GPIO_USART3_TXD_1      (GPIO_FUNCA | GPIO_PORTB | GPIO_PIN10)
#define GPIO_USART3_TXD_2      (GPIO_FUNCA | GPIO_PORTC | GPIO_PIN29)
#define GPIO_USART3_TXD_3      (GPIO_FUNCB | GPIO_PORTC | GPIO_PIN10)
#define GPIO_USART3_TXD_4      (GPIO_FUNCE | GPIO_PORTA | GPIO_PIN31)

/* USB 2.0 Interface */

#define GPIO_USBC_DM           (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN25)
#define GPIO_USBC_DP           (GPIO_FUNCA | GPIO_PORTA | GPIO_PIN26)

/************************************************************************************
 * Public Types
 ************************************************************************************/

/************************************************************************************
 * Inline Functions
 ************************************************************************************/

#ifndef __ASSEMBLY__

/************************************************************************************
 * Public Data
 ************************************************************************************/

#undef EXTERN
#if defined(__cplusplus)
#define EXTERN extern "C"
extern "C"
{
#else
#define EXTERN extern
#endif

/************************************************************************************
 * Public Function Prototypes
 ************************************************************************************/

#undef EXTERN
#if defined(__cplusplus)
}
#endif

#endif /* __ASSEMBLY__ */
#endif /* __ARCH_ARM_SRC_SAM34_CHIP_SAM3U_PINMAP_H */
