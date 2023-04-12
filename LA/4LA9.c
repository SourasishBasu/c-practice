#include <stdio.h>
void main()
{
    int num, avg;
    printf("Enter number till which average is to be found: ");
    scanf("%d", &num);
    avg =  (num + 1)/2;
    printf("%d", avg);
}