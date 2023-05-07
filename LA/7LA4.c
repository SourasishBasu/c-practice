#include <stdio.h>
#define MAX 100
int main()
{
    int temp,n,i;
    printf("Enter number: ");
    scanf("%d",&n);
    //value of n must be even
    if(n%2 !=0)
    {
        printf("Total number of elements should be EVEN.");
        return 1;
    }
    int arr[n];
    //read array elements
    printf("Enter array elements:\n");
    for(i=0;i < n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    //swap adjacent elements
    for(i=0;i < n;i+=2)
    {
        temp    = arr[i];
        arr[i]  = arr[i+1];
        arr[i+1]= temp;
    }
     
    printf("\nAfter swap:\n");
    for(i=0;i < n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return;
}