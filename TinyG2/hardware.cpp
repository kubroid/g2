/*
 * hardware.cpp - general hardware support functions
 * This file is part of TinyG2 project
 *
 * Copyright (c) 2010 - 2013 Alden S. Hart Jr.
 *
 * This file ("the software") is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2 as published by the
 * Free Software Foundation. You should have received a copy of the GNU General Public
 * License, version 2 along with the software.  If not, see <http://www.gnu.org/licenses/>.
 *
 * As a special exception, you may use this file as part of a software library without
 * restriction. Specifically, if other files instantiate templates or use macros or
 * inline functions from this file, or you compile this file and link it with  other
 * files to produce an executable, this file does not by itself cause the resulting
 * executable to be covered by the GNU General Public License. This exception does not
 * however invalidate any other reasons why the executable file might be covered by the
 * GNU General Public License.
 *
 * THE SOFTWARE IS DISTRIBUTED IN THE HOPE THAT IT WILL BE USEFUL, BUT WITHOUT ANY
 * WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT
 * SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "tinyg2.h"
#include "hardware.h"

#ifdef __cplusplus
extern "C"{
#endif

/*
 * hardware_init() - lowest level hardware init
 */

void hardware_init()
{
	return;
}

/*
uint8_t sys_read_calibration_byte(uint8_t index)
{ 
	NVM_CMD = NVM_CMD_READ_CALIB_ROW_gc; 	// Load NVM Command register to read the calibration row
	uint8_t result = pgm_read_byte(index); 
	NVM_CMD = NVM_CMD_NO_OPERATION_gc; 	 	// Clean up NVM Command register 
	return(result); 
}
*/

/*
 * hardware_get_id() - get a human readable signature
 *
 *	Produces a unique deviceID based on the factory calibration data. Format is:
 *		123456-ABC
 *
 *	The number part is a direct readout of the 6 digit lot number
 *	The alpha is the lo 5 bits of wafer number and XY coords in printable ASCII
 *	Refer to NVM_PROD_SIGNATURES_t in iox192a3.h for details.
 */
 /*
enum { 
	LOTNUM0=8,  // Lot Number Byte 0, ASCII 
	LOTNUM1,    // Lot Number Byte 1, ASCII 
	LOTNUM2,    // Lot Number Byte 2, ASCII 
	LOTNUM3,    // Lot Number Byte 3, ASCII 
	LOTNUM4,    // Lot Number Byte 4, ASCII 
	LOTNUM5,    // Lot Number Byte 5, ASCII 
	WAFNUM =16, // Wafer Number 
	COORDX0=18, // Wafer Coordinate X Byte 0 
	COORDX1,    // Wafer Coordinate X Byte 1 
	COORDY0,    // Wafer Coordinate Y Byte 0 
	COORDY1,    // Wafer Coordinate Y Byte 1 
}; 

void hardware_get_id(char_t *id)
{
	char printable[33] = {"ABCDEFGHJKLMNPQRSTUVWXYZ23456789"};
	uint8_t i;

	NVM_CMD = NVM_CMD_READ_CALIB_ROW_gc; 	// Load NVM Command register to read the calibration row

	for (i=0; i<6; i++) {
		id[i] = pgm_read_byte(LOTNUM0 + i);
	}
	id[i++] = '-';
	id[i++] = printable[(pgm_read_byte(WAFNUM) & 0x1F)];
	id[i++] = printable[(pgm_read_byte(COORDX0) & 0x1F)];
//	id[i++] = printable[(pgm_read_byte(COORDX1) & 0x1F)];
	id[i++] = printable[(pgm_read_byte(COORDY0) & 0x1F)];
//	id[i++] = printable[(pgm_read_byte(COORDY1) & 0x1F)];
	id[i] = 0;

	NVM_CMD = NVM_CMD_NO_OPERATION_gc; 	 	// Clean up NVM Command register 
}
*/
 
 #ifdef __cplusplus
 }
 #endif