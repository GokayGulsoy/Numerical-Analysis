CC=gcc
CFLAGS=-O2 -Wall -g -std=c11
LDFLAGS=-lm
RM=rm -f

.PHONY: all
all: float-test string-test sqrt-test

float-test: floating_point.o float_utils.o
	$(CC) $^ $(LDFLAGS) -o $@

float_point.o: floating_point.c float_utils.h Makefile

float_utils.o: float_utils.c float_utils.h Makefile

string-test: string_test.o
	$(CC) $^ $(LDFLAGS) -o $@

string_test.o: string_test.c Makefile

sqrt-test: sqrt_test.o sqrt_newton.o
	$(CC) $^ $(LDFLAGS) -o $@

sqrt_test.o: sqrt_test.c sqrt_newton.h Makefile

sqrt_newton.o: sqrt_newton.c sqrt_newton.h Makefile

.PHONY: clean
clean:
	@echo Cleaning up...
	@$(RM) *.o float-test sqrt-test string-test *~

