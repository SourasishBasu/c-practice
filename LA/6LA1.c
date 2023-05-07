#include <stdio.h>
void main()
{
    int arr[]= {7, 21, 36, 2, 36};
    int i,j;
    for (i = 0; i < 5; i++)
    {
        for (j = i+1; j < 5; j++)
        {        
            if (arr[i] == arr[j])
            {
                printf("%d is a duplicate in the array.", arr[i]);
            }
        }
    }
}