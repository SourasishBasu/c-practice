#include <stdio.h>
void main()
{
    int num, first, last, sum;
    printf("Enter 3 digit number: ");
    scanf("%d", &num);
    first = num / 100;
    last = num % 10;
    sum = first + last;
    printf("%d", sum);
}