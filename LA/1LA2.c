#include <stdio.h>

void main()
{
    int c, f;
    printf("Enter temperature in C: ");
    scanf("%d", &c);
    f = (c * 1.8) + 32;
    printf("Temperature in Fahrenheit is: %d", f);
}
