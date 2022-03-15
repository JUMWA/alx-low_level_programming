#include <stdio.h>

#include <time.h>

#include <stdlib.h>

/**
 *prints all single digit number with a base of 10 that start from 0
 */
int main(void)
{
  char c = 'z';
  while (c >= 'a')
  {
    putchar(c);
    c--;
  }
  putchar('\n');
  return (0);
}
