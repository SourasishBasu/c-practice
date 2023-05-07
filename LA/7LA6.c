#include <stdio.h>
int main()
{
    int arr[100], n, c, t, end;
    printf("Enter array size: ");
    scanf("%d", &n);
    end = n - 1;
    
    for (c = 0; c < n; c++) 
    {
        printf("Enter number: ");
        scanf("%d", &arr[c]);
    }
    
    for (c = 0; c < n/2; c++) 
    {
        t = arr[c];
        arr[c] = arr[end];
        arr[end] = t;    
        end--;
    }
    
    printf("Reversed array elements are:\n");
    for (c = 0; c < n; c++) 
    {
        printf("%d\n", arr[c]);
    }
    
    return 0;
}