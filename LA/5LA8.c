#include <stdio.h>
void main()
{
    int n, i;
    printf("Enter no. of terms: ");
    scanf("%d", &n);
    printf("Odd\n");
    for (i = 1; i <= n; ++i)
    {
        if (i%2 != 0)
        {
            printf("%d\n", i);
        }
    }
    printf("Even\n");
    for (i = 1; i <= n; ++i)
    {
        if (i%2 == 0)
        {
            printf("%d\n", i);
        }
    }
}