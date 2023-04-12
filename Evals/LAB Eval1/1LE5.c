#include <stdio.h>
#include <math.h>
void main()
{
    int n,i,x=0;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("%d is not perfect", n);
    }
    else
    {
        for (int i = 1; i < n; i++)
        { 
            if (n % i == 0)
            {
                printf("%d is factor\n", i);
                x = x+i;
            }
        }
        if (n == x)
        {
            printf("%d is a perfect number.", n);
        }
        else
            printf("%d is not a perfect number.", n);
    }
     
}
    