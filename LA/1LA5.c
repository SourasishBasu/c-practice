#include <stdio.h>
void main()
{
    int k, m, m1;
    printf("Enter distance in m: ");
    scanf("%d", &m);
    k = m / 1000;
    m1 = m % 1000;
    printf("%d meter = %d Km and %d m", m, k, m1);
}