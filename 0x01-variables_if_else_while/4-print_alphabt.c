#include <stdio.h>
/**
 *gets a number,checks last digit and compares it to 5
 */
int main(void)
{
  char c = 'a';
  while (c <= 'z')
  {
     if(c != 'e' && c != 'q')
     {
        putchar(c);
     }
     c++;
  }
  putchar('\n');
  return (0);
}
