/*
 * avrlibdefs.h
 *
 * Created: 12/22/2024 7:43:03 PM
 *  Author: paul.contis
 */ 


#ifndef AVRLIBDEFS_H_
#define AVRLIBDEFS_H_

// Code compatibility to new AVR-libc
// outb(), inb(), inw(), outw(), BV(), sbi(), cbi(), sei(), cli()
#ifndef outb
#define	outb(addr, data)	addr = (data)
#endif
#ifndef inb
#define	inb(addr)			(addr)
#endif
#ifndef outw
#define	outw(addr, data)	addr = (data)
#endif
#ifndef inw
#define	inw(addr)			(addr)
#endif
#ifndef BV
#define BV(bit)			(1<<(bit))
#endif
#ifndef cbi
#define cbi(reg,bit)	reg &= ~(BV(bit))
#endif
#ifndef sbi
#define sbi(reg,bit)	reg |= (BV(bit))
#endif
#ifndef cli
#define cli()			__asm__ __volatile__ ("cli" ::)
#endif
#ifndef sei
#define sei()			__asm__ __volatile__ ("sei" ::)
#endif

// support for individual port pin naming in the mega128
// see port128.h for details
#ifdef __AVR_ATmega128__
// not currently necessary due to inclusion
// of these defines in newest AVR-GCC
// do a quick test to see if include is needed
#ifndef PD0
#include "port128.h"
#endif
#endif

// use this for packed structures
// (this is seldom necessary on an 8-bit architecture like AVR,
//  but can assist in code portability to AVR)
#define GNUC_PACKED __attribute__((packed))

// port address helpers
#define DDR(x) ((x)-1)    // address of data direction register of port x
#define PIN(x) ((x)-2)    // address of input register of port x

// MIN/MAX/ABS macros
#define MIN(a,b)			((a<b)?(a):(b))
#define MAX(a,b)			((a>b)?(a):(b))
#define ABS(x)				((x>0)?(x):(-x))

// constants
#define PI		3.14159265359

#endif /* AVRLIBDEFS_H_ */