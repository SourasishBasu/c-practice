#include <stdio.h>
void main() 
{
    int n,sum=0;
    int arr[5];

    for(int i=0;i<5;i++)
    {
        printf("Enter elements: ");
        scanf("%d",&arr[i]);
        sum = sum + arr[i];

    }
    printf("Sum of the elements is: %d",sum);
}