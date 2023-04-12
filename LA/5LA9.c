#include <stdio.h>

void main() 
{
  int n, reverse = 0, rem;
  printf("Enter an integer: ");
  scanf("%d", &n);
  while (n != 0) 
  {
    rem = n % 10;
    reverse = reverse * 10 + rem;
    n = n /10;
  }
  printf("Reverse = %d", reverse);
}