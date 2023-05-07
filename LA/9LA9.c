#include <stdio.h>
void swap()
{
    int a, b;
    printf("Enter 1st num: ");
    scanf("%d", &a);
    printf("Enter 2nd num: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("1st num is %d and 2nd num is %d", a, b);
}
void main()
{
    swap();
}