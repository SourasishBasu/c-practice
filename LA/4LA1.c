#include <stdio.h>
void main()
{
    float g, big, abc;
    printf("Enter values for big and abc: ");
    scanf("%f %f", &big, &abc);
    g = big / 2 + big * 4 / big - big + abc / 3 ;
    printf("%f", g);
}