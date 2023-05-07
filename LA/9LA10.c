#include <stdio.h>

void palindrome() 
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
  if (reverse=n)
  {
    printf("%d is palindrome.", n);
  }
}
void main()
{
    palindrome();
}