#include <stdio.h>
#include <math.h>
void main()
{
    int n, i,x;
    printf("Enter number: ");
    scanf("%d", &n);
    x = 0;
    if (n == 1)
    {
        printf("%d is neither prime nor composite", n);
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        { 
            if (n % i == 0)
            { 
                printf("%d is not prime\n", n);
                x = 1;
                break;    
            }
        }
        if (x == 0)
            printf("%d is prime",n); 
    
    }
     
}
    