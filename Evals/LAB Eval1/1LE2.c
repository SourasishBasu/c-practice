#include <stdio.h>
void main()
{
    int n, a=1;
    printf("Enter number whose factorial is required: ");
    scanf("%d", &n);
    while (n != 0)
    {
        a = a * n;
        --n;
    }
    printf("%d", a);
}