#include <stdio.h>
int main ()
{
    int i = 0, min,mid,max;
    int arr[3];

    for (i = 0; i < 3; i++)
    {
        printf ("Enter the elements: ");
        scanf ("%d", &arr[i]);
    }
    min = arr[0];
    mid = arr[1];
    max = arr[2];
    if (min > mid)
    {
        mid = arr[0]; min = arr[1];
    }
    if (mid > max)
    {
        max = mid;
        mid = arr[2];
        if (min > mid)
        {
            mid = min;
            min = arr[2];
        }
    }
    printf("Sorted Elements: %d, %d, %d", min, mid, max);
    return 0;
}