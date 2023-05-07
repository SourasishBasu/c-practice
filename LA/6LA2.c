
#include <stdio.h>
void main()
{
    int arr[]= {7, 21, 86, 2, 73};
    int i, max;
    max = arr[0];
    for (i = 1; i < 5; i++)
    {
        if (arr [i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d", max);

}