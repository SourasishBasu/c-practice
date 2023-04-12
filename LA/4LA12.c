#include <stdio.h>
void main()
{
   int n, rem;
   printf("Enter an integer\n");
   scanf("%d", &n);
   rem = n % 10;
   printf("Required digit: %d", rem);
}