#include <stdio.h>

int main() {
    int i, j, n,x,y;
    printf("Enter rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) 
    {
        {
            for(j = i; j >= 1; j--) 
            {
                x = 64 + j;
                printf("%c", x);
            }
        } 
        printf("\n");
    }
    
    return 0;
}

