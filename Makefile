# A simple makefile for building a program composed of C source files.

PROGRAMS = bits_playground bitvectors_masks absolute_value is_power_of_2

all:: $(PROGRAMS)

CC = gcc
CFLAGS = -g3 -O0 -std=gnu99 -fno-stack-protector -Wall $$warnflags
export warnflags = -Wfloat-equal -Wtype-limits -Wpointer-arith -Wlogical-op -Wshadow -Winit-self -fno-diagnostics-show-option
LDFLAGS =
LDLIBS =

$(PROGRAMS): %:%.c
	$(CC) $(CFLAGS) $(LDFLAGS) $^ $(LDLIBS) -o $@

clean::
	rm -f $(PROGRAMS) *.o

spartan:: clean
	rm -f *~

.PHONY: clean spartan all
