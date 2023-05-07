#include <stdio.h>
int main ()
{
    int n,i,temp = 0;

    printf ("Enter size of the array\n");
    scanf ("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf ("Enter the element: ");
        scanf ("%d", &arr[i]);
    }

    for(i=0 ; i<n/2 ; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    printf("\nThe array after swap is..\n");
    for(i=0 ; i<n ; i++)
    {
        printf("\n[%d] : %d",i,arr[i]);
    }
    
    return 0;
}