/*****************************************************************************
* Product: PELICAN crossing example
* Last Updated for Version: 4.5.02
* Date of the Last Update:  Oct 09, 2012
*
*                    Q u a n t u m     L e a P s
*                    ---------------------------
*                    innovating embedded systems
*
* Copyright (C) 2002-2012 Quantum Leaps, LLC. All rights reserved.
*
* This program is open source software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published
* by the Free Software Foundation, either version 2 of the License, or
* (at your option) any later version.
*
* Alternatively, this program may be distributed and modified under the
* terms of Quantum Leaps commercial licenses, which expressly supersede
* the GNU General Public License and are specifically designed for
* licensees interested in retaining the proprietary status of their code.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
*
* Contact information:
* Quantum Leaps Web sites: http://www.quantum-leaps.com
*                          http://www.state-machine.com
* e-mail:                  info@quantum-leaps.com
*****************************************************************************/
#ifndef bsp_h
#define bsp_h

#include <msp430g2553.h>                             /* MSP430 variant used */

/*--------------------------------------------------------------------------*/
#ifdef __GNUC__
#define __low_power_mode_0() _BIS_SR(LPM0_bits+GIE)
#define __low_power_mode_1() _BIS_SR(LPM1_bits+GIE)
#define __low_power_mode_2() _BIS_SR(LPM2_bits+GIE)
#define __low_power_mode_3() _BIS_SR(LPM3_bits+GIE)
#define __low_power_mode_4() _BIS_SR(LPM4_bits+GIE)
#define __low_power_mode_off_on_exit() LPM4_EXIT
#endif

/*--------------------------------------------------------------------------*/
#define BSP_TICKS_PER_SEC  20U

#define BSP_MCK            8000000U
#define BSP_SMCLK          8000000U
#define BSP_ACLK           12000U

void BSP_init(void);
void BSP_ledOff(void);
void BSP_ledOn(void);

#endif                                                             /* bsp_h */

