#include <stdio.h>

int main()
{

    int n,i, c=0;
    printf( "Enter number: ");
    scanf("%d", &n);
    int arr[n];
    for ( i = 0; i < n; i++ )
    {
        printf("\t%d: ", i + 1 );
        scanf( "%d", arr + i );
    }
    for ( int i = 1; i < n; i++ )
    {
        if ( arr[c] < arr[i] ) 
            c = i;
    }
    printf( "The greatest number in the given array is: %d\n", arr[c] );
    
    return 0;
} 