#include <stdio.h>
void main()
{
    int i, x=1, n;
    printf("Enter no. of terms: ");
    scanf("%d", &n);
    printf("1\n");
    for (i = 1; i <= n; ++i)
    {
        x = x * 2 + 1;
        printf("%d\n", x);
    }
}