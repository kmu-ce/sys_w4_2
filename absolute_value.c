/*
 * This program demonstrates how to implement absolute value using
 * bitwise operators.  This program can be run with 1 command-line argument,
 * in which case it prints out the absolute value of that argument,
 * or no command-line arguments, in which case it runs some
 * tests on the implementation.
 *
 * Reminders:
 * -- Right shift on signed integers fills with copies of the sign bit
 * -- Signed and unsigned integers use different comparison operations
 * -- Other than that, most operations behave the same way (e.g. addition, subtraction)
 */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

// The maximum value to test with for absolute value
#define TEST_MAX 10

/* Original version of absolute value using conditionals and multiplication */
int absolute_value(int value) {
    return (value < 0) ? -value : value;
}

/* Bitwise version of absolute value with no conditionals or multiplication */
int absolute_value_bitwise(int value) {
	// TODO
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        // Calculate the absolute value of various numbers
        for (int i = 1; i <= TEST_MAX; i++) {
            printf("|%d| = %d\n", i, absolute_value_bitwise(i));
            printf("|%d| = %d\n", -i, absolute_value_bitwise(-i));
        }
    } else {
        // Calculate the absolute value of the provided number
        int value = atoi(argv[1]);
        printf("|%d| = %d\n", value, absolute_value(value));
    }

    return 0;
}

