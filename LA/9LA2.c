#include <stdio.h>
void factorial()
    {
        int a, f=1;
        printf("Enter no.: ");
        scanf("%d", &a);
        while (a != 1)
        {
            f *= a--;
        }
        printf("Factorial: %d", f);
    }
void main()
{
    factorial();
}

