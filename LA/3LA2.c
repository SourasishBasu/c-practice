#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter 1st, 2nd and 3rd numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    
    if (a > b)
        if (c > a)
            printf("%d is largest integer", c);
        else
            printf("%d is largest integer", a);
    else if (b > a)
        if (c > b)
            printf("%d is largest integer", c);
        else
            printf("%d is largest integer", b);
}