#include "holberton.h"
/**
  *print_binary - a function that display binaries
  *@n : the integer we want to change to binary
  */
void print_binary(unsigned long int n)
{
unsigned int c;
unsigned int display_mask = 1 << 31;
for (c = 1; c < 32; ++c)
{
_putchar(n & display_mask ? '1' : '0');
n <<= 1;
}
_putchar('\n');
}[A[A[A[A[A[A[A[A[A[A[A[A[A[A[A[C[C[C[C[C[C[C[C[C[C[C[C[C[Cmain.h"[C[C[C[B[B[B[B[B[B[B[B[B[B[B[B[B[B[B[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D
