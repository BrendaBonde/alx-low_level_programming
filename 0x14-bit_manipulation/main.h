#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int _putchar(char);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
unsigned long int _pow(unsigned int base, unsigned int power);
int get_bit(unsigned int base, unsigned int index);
int get_endianness(void);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif
