#include <stdio.h>
int main()
{
	int i,j,r,c;
	
	printf("Enter number of Rows :");
	scanf("%d",&r);
	printf("Enter number of Cols :");
	scanf("%d",&c);

	int matrix[r][c];
	printf("\nEnter matrix elements :\n");
	for(i=0;i< r;i++)
	{
		for(j=0;j< c;j++)
		{
			printf("Enter element [%d,%d] : ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}

    for(i=0;i< r;i++)
	{
		for(j=0;j< c;j++)
		{
            if (i=j)
            {
                printf("Element in [Row,Column]: [%d,%d] : %d ",i,j, matrix[i][j]);
            }
		}
	}
	return 0;	
}