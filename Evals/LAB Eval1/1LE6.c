#include <stdio.h>
#include <math.h>
void main()
{
    int start, end, i, x;
    printf("Enter starting point and end point: ");
    scanf("%d%d", &start, &end);
    start = start + 1;
    while (start < end)
    {
        x = 0;
        for (int i = 2; i <= sqrt(start); i++)
        { 
            if (start % i == 0)
            { 
                x = 1;
                break;    
            }
        }
        if (x == 0)
            printf("%d\n",start);
        ++start;
    }
} 
    