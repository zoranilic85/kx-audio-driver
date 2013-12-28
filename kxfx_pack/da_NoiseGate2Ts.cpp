// kX Driver / kX Driver Interface / kX Driver Effects Library
// Copyright (c) Eugene Gavrilov, 2002-2004.
// All rights reserved

/*
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

// Copyright (c) 2004 Eugeniy Sokol. All rights reserved

// 10kX microcode
// Patch name: 'Noise Gate 2Ts'

char *NoiseGate2Ts_copyright="Copyright (c) 2004 Eugeniy Sokol. All rights reserved";
char *NoiseGate2Ts_engine="kX";
char *NoiseGate2Ts_comment="";
char *NoiseGate2Ts_created="01/23/2004";
char *NoiseGate2Ts_guid="7065d870-c198-4304-84ae-d9aecdbd857b";

char *NoiseGate2Ts_name="Noise Gate 2Ts";
int NoiseGate2Ts_itramsize=0,NoiseGate2Ts_xtramsize=0;

dsp_register_info NoiseGate2Ts_info[]={
	{ "inL",0x4000,0x7,0xffff,0x0 },
	{ "inR",0x4001,0x7,0xffff,0x0 },
	{ "outL",0x8000,0x8,0xffff,0x0 },
	{ "outR",0x8001,0x8,0xffff,0x0 },
	{ "hold",0x8002,0x4,0xffff,0xccccccc },
	{ "thup",0x8003,0x4,0xffff,0xccccccc },
	{ "thdn",0x8004,0x4,0xffff,0xccccccc },
	{ "er",0x8005,0x4,0xffff,0xccccccc },
	{ "ea",0x8006,0x4,0xffff,0xccccccc },
	{ "ampl",0x8007,0x1,0xffff,0x0 },
	{ "env",0x8008,0x1,0xffff,0x0 },
	{ "on",0x8009,0x1,0xffff,0x0 },
	{ "ampl2",0x800a,0x1,0xffff,0x0 },
	{ "env2",0x800b,0x1,0xffff,0x0 },
	{ "on2",0x800c,0x1,0xffff,0x0 },
	{ "tmp",0x800d,0x3,0xffff,0x0 },
	{ "thrs",0x800e,0x3,0xffff,0x0 },
};

dsp_code NoiseGate2Ts_code[]={
	{ 0x9,0x800d,0x4000,0x4000,0x2040 },
	{ 0xe,0x8007,0x8007,0x8002,0x800d },
	{ 0xe,0x800e,0x8003,0x8009,0x8004 },
	{ 0x1,0x800d,0x8007,0x800e,0x204f },
	{ 0xa,0x8009,0x800d,0x204f,0x2040 },
	{ 0xe,0x800d,0x8005,0x8009,0x8006 },
	{ 0xe,0x8008,0x8008,0x800d,0x8009 },
	{ 0x0,0x8000,0x2040,0x4000,0x8008 },
	{ 0x9,0x800d,0x4001,0x4001,0x2040 },
	{ 0xe,0x800a,0x800a,0x8002,0x800d },
	{ 0xe,0x800e,0x8003,0x800c,0x8004 },
	{ 0x1,0x800d,0x800a,0x800e,0x204f },
	{ 0xa,0x800c,0x800d,0x204f,0x2040 },
	{ 0xe,0x800d,0x8005,0x800c,0x8006 },
	{ 0xe,0x800b,0x800b,0x800d,0x800c },
	{ 0x0,0x8001,0x2040,0x4001,0x800b },
};

#define efxHOLD	0x8002
#define efxTHUP	0x8003
#define efxTHDN	0x8004
#define efxER	0x8005
#define efxEA	0x8006
