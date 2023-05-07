#include <stdio.h>
void fact()
{
    int n, r, ncr;
    int f = 1, i;
    printf("\n Enter the value for N and R \n");
    scanf("%d%d", &n, &r);
    ncr = n /(r * (n - r));
    printf("\n The value of ncr is: %d", ncr);
}
void main()
{
    fact();
}