#include <stdio.h>
int main()
{
	int i,j,r,c;

//Taking matrix 1 input 
    printf("Enter number of Rows :");
	scanf("%d",&r);
	printf("Enter number of Cols :");
	scanf("%d",&c);

	int matrix1[r][c];
    printf("MATRIX: \n");
	printf("\nEnter matrix elements :\n");
	for(i=0;i< r;i++)
	{
		for(j=0;j< c;j++)
		{
			printf("Enter element [%d,%d] : ",i+1,j+1);
			scanf("%d",&matrix1[i][j]);
		}
	}

	
	
//generating lower diagonal elements
    printf("Lower Diagonal Elements: ");
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if (i==j+1)
			{
                printf("%d", matrix1[i][j]);
            }
		}
	}

	return 0;	
}