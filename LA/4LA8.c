#include <stdio.h>
void main()
{
    int num, sum;
    printf("Enter number till which sum is to be found: ");
    scanf("%d", &num);
    sum = (num * (num+1) * (2*num +1))/6;
    printf("%d", sum);
}