#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
  int a;
  int b;
  a = 22;
  b = 7;
  printf("%d / %d = ", a, b);
  ft_ultimate_div_mod(&a, &b);
  printf("%d, with %d remaining\n", a, b);
}
