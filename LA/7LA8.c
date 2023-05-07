#include <stdio.h>
int main ()
{
    int n = 0, i = 0, largest1 = 0, largest2 = 0, temp = 0;

    printf ("Enter the size of the array\n");
    scanf ("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf ("Enter the elements: ");
        scanf ("%d", &arr[i]);
    }
    
    largest1 = arr[0];
    largest2 = arr[1];

    if (largest1 < largest2)
    {
        temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > largest1)
        {
            largest2 = largest1;
            largest1 = arr[i];
        }
        else if (arr[i] > largest2 && arr[i] != largest1)
        {
            largest2 = arr[i];
        }
    }

    printf ("Second largest element: %d\n", largest2);
    return 0;
}