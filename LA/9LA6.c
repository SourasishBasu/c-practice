#include <stdio.h>
void sum_arr() 
{
    int i, n,sum=0;
    printf ("Enter the size of the array\n");
    scanf ("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf ("Enter the elements: ");
        scanf ("%d", &arr[i]);
        sum = sum + arr[i];

    }
    printf("Sum of the elements is: %d",sum);
}
void main()
{
    sum_arr();
}