#include <stdio.h>

int main()
{

    int arr[10];
 
    for ( int i = 0; i < 10; i++ )
    {
        printf("\t%d: ", i + 1 );
        scanf( "%d", arr + i );
    }
    return 0;
} 