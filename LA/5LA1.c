#include <stdio.h>
void main() 
{
   int i,x, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) 
   {
        for (x = 1; x <= rows-i; x++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) 
        {
            printf("* ");
        }
        printf("\n");
   }
}