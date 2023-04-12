#include <stdio.h>
void main()
{
    int s, a, g;
    printf("Enter values for g, a: ");
    scanf("%d %d", &g, &a);
    s = 1 / 3 * a / 4 - 6 / 2 + 2 / 3 * 6 / g ;
    printf("%d", s);
}