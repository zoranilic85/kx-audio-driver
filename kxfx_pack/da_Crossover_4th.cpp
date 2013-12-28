// kX Driver / kX Driver Interface / kX Driver Effects Library
// Copyright (c) Eugene Gavrilov, 2001-2005.
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

// 10kX microcode
// Patch name: 'Crossover 4th'

char *Crossover_4_copyright="Copyright � Max Mikhailov and Dmitry Kapustin, 2003-2004.";
char *Crossover_4_engine="3537";
char *Crossover_4_comment="";
char *Crossover_4_created="";
char *Crossover_4_guid="8b5a4e20-7642-11d8-b0d0-993aaeed8613";

char *Crossover_4_name="4th order crossover";
int Crossover_4_itramsize=0,Crossover_4_xtramsize=0;

efx_register_info Crossover_4_info[]={
	{ "in1",0x4000,0x7,0xffff,0x0 },
	{ "in2",0x4001,0x7,0xffff,0x0 },
	{ "l1",0x8000,0x8,0xffff,0x0 },
	{ "h1",0x8001,0x8,0xffff,0x0 },
	{ "l2",0x8002,0x8,0xffff,0x0 },
	{ "h2",0x8003,0x8,0xffff,0x0 },
	{ "b",0x8004,0x1,0xffff,0x6f68090d },
	{ "a2",0x8005,0x1,0xffff,0x77208a7f },
	{ "a3",0x8006,0x1,0xffff,0x9097cc6b },
	{ "lz1",0x8007,0x1,0xffff,0x0 },
	{ "lz2",0x8008,0x1,0xffff,0x0 },
	{ "lz3",0x8009,0x1,0xffff,0x0 },
	{ "lz4",0x800a,0x1,0xffff,0x0 },
	{ "lz5",0x800b,0x1,0xffff,0x0 },
	{ "lz6",0x800c,0x1,0xffff,0x0 },
	{ "rz1",0x800d,0x1,0xffff,0x0 },
	{ "rz2",0x800e,0x1,0xffff,0x0 },
	{ "rz3",0x800f,0x1,0xffff,0x0 },
	{ "rz4",0x8010,0x1,0xffff,0x0 },
	{ "rz5",0x8011,0x1,0xffff,0x0 },
	{ "rz6",0x8012,0x1,0xffff,0x0 },
	{ "i",0x8013,0x3,0xffff,0x0 },
	{ "x",0x8014,0x3,0xffff,0x0 },
	{ "y",0x8015,0x3,0xffff,0x0 },
};

efx_code Crossover_4_code[]={
	{ 0x0,0x8013,0x4000,0x2040,0x2040 },
	{ 0x0,0x8014,0x2040,0x8013,0x8004 },
	{ 0x4,0x8015,0x8014,0x8007,0x2051 },
	{ 0x1,0x8007,0x8014,0x8015,0x8005 },
	{ 0x1,0x8007,0x8007,0x8008,0x204d },
	{ 0x0,0x8008,0x8014,0x8015,0x8006 },
	{ 0x4,0x8001,0x8015,0x8009,0x2051 },
	{ 0x1,0x8009,0x8015,0x8001,0x8005 },
	{ 0x1,0x8009,0x8009,0x800a,0x204d },
	{ 0x0,0x800a,0x8015,0x8001,0x8006 },
	{ 0x1,0x8014,0x800b,0x8013,0x8006 },
	{ 0x0,0x800b,0x8014,0x8013,0x204e },
	{ 0x0,0x8015,0x800c,0x800b,0x8005 },
	{ 0x0,0x800b,0x8015,0x800b,0x8005 },
	{ 0x0,0x800c,0x8013,0x8014,0x8006 },
	{ 0x0,0x8000,0x8014,0x8001,0x204e },
	{ 0x0,0x8013,0x4001,0x2040,0x2040 },
	{ 0x0,0x8014,0x2040,0x8013,0x8004 },
	{ 0x4,0x8015,0x8014,0x800d,0x2051 },
	{ 0x1,0x800d,0x8014,0x8015,0x8005 },
	{ 0x1,0x800d,0x800d,0x800e,0x204d },
	{ 0x0,0x800e,0x8014,0x8015,0x8006 },
	{ 0x4,0x8003,0x8015,0x800f,0x2051 },
	{ 0x1,0x800f,0x8015,0x8003,0x8005 },
	{ 0x1,0x800f,0x800f,0x8010,0x204d },
	{ 0x0,0x8010,0x8015,0x8003,0x8006 },
	{ 0x1,0x8014,0x8011,0x8013,0x8006 },
	{ 0x0,0x8011,0x8014,0x8013,0x204e },
	{ 0x0,0x8015,0x8012,0x8011,0x8005 },
	{ 0x0,0x8011,0x8015,0x8011,0x8005 },
	{ 0x0,0x8012,0x8013,0x8014,0x8006 },
	{ 0x0,0x8002,0x8014,0x8003,0x204e },
};
