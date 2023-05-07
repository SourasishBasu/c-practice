#include <stdio.h>

int main()
{

    int n,i;
    printf( "Enter numbers:\n");
    scanf("%d", &n);
    int arr[n];
    for ( i = 0; i < n; i++ )
    {
        printf("\t%d: ", i + 1 );
        scanf( "%d", arr + i );
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0 && 100 <= arr[i] && arr[i] <= 999)
        {
            printf("%d ", arr[i]);
        }
    }
     return 0;
} 