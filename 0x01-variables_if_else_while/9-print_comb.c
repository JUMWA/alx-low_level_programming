#include <stdio.h>
#include <stdlib.h>
/**
 *prints all single digitd with base 10,starts from 0
 */
int main(void)
{
  int c = 0;
  while (c <10)
  {
    putchar(48 + c);
    if (c !=9)
    {
      putchar(',');
      putchar(' ');
    }
    c++;
   }
   putchar('\n');
   return (0);
}
