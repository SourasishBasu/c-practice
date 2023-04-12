#include <stdio.h>
void main()
{
    int num, rem, rem1, rem2, first, second, third, fourth, fifth;
    printf("Enter 5 digit number: ");
    scanf("%d", &num);
    first = num / 10000;
    rem = num % 10000;
    second = rem / 1000;
    rem1 = rem % 1000;
    third = rem1 / 100;
    rem2 = rem1 % 100;
    fourth = rem2 / 10;
    fifth = rem2 % 10;
    printf("%d%d%d%d%d", fifth, fourth, third, second, first);
}