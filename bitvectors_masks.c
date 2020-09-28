/*
 * This program provides practice with bitwise
 * operators and bitmasks via a bitwise representation
 * of what classes we have taken.
 */

#include <stdio.h>

// Bit representations of the different courses
#define CPL 	0x1    /* 0000 0001 */
#define ALGOS 	0x2    /* 0000 0010 */
#define NET	    0x4    /* 0000 0100 */
#define SYS  	0x8    /* 0000 1000 */
#define DB  	0x10   /* 0001 0000 */
#define WEB 	0x20   /* 0010 0000 */
#define PYTHON  0x40   /* 0100 0000 */
#define JAVA  	0x80   /* 1000 0000 */


int main(int argc, char *argv[])
{
	/* Bit pattern: 0000 1011 */
    unsigned char courses = CPL | ALGOS | SYS;

    /* Set a bit: add WEB to courses (will now be 0010 1011) */


    /* Clear a bit: remove CPL from courses (will now be 0010 1010) */


    /* Challenge: how can we check if they took SYS OR DB? SYS AND DB? */

    return 0;
}
