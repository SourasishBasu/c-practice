#include <stdio.h>
#include <math.h>
void main()
{
    int s1,s2,s3,p,a;
    printf("Enter 1st side:\n");
    scanf("%d", &s1);
    printf("Enter 2nd side:\n");
    scanf("%d", &s2);
    printf("Enter 3rd side:\n");
    scanf("%d", &s3);
    p = (s1 + s2 + s3) / 2;
    a = sqrt(p * (p - s1) * (p - s2) * (p - s3));
    printf("Area is: %d", a);
}