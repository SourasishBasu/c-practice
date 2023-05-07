#include <stdio.h>
void sum()
    {
        int a, b, sum;
        printf("Enter no. 1: ");
        scanf("%d", &a);
        printf("Enter no. 2: ");
        scanf("%d", &b);
        sum = a + b;
        printf("Sum: %d", sum);
    }
void main()
{
    sum();
}

