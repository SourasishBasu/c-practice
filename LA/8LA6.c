#include <stdio.h>
int main()
{
	int i,j,k,r,c,r2,c2;
	int sum =0;

//Taking matrix 1 input 
    printf("Enter number of Rows :");
	scanf("%d",&r);
	printf("Enter number of Cols :");
	scanf("%d",&c);

	int matrix1[r][c];
	printf("MATRIX 1:\n");
	printf("\nEnter matrix elements :\n");
	for(i=0;i< r;i++)
	{
		for(j=0;j< c;j++)
		{
			printf("Enter element [%d,%d] : ",i+1,j+1);
			scanf("%d",&matrix1[i][j]);
		}
	}

	
//taking matrix 2 input
	printf("Enter number of Rows :");
	scanf("%d",&r2);
	printf("Enter number of Cols :");
	scanf("%d",&c2);

	int matrix2[r][c];
    printf("MATRIX 2:\n");
	printf("\nEnter matrix elements :\n");
	for(i=0;i< r2;i++)
	{
		for(j=0;j< c2;j++)
		{
			printf("Enter element [%d,%d] : ",i+1,j+1);
			scanf("%d",&matrix2[i][j]);
		}
	}
	
//generating multiplication matrix
	int matrix3[r][c2];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			for (k = 0; k < c;k++)
			{
				sum += matrix1[i][k] * matrix2[k][j];
			}
			matrix3[i][j] = sum;
			sum = 0;
		}
		printf('%f', sum);
	}

//printing new matrix
    for(i=0;i< r;i++)
	{
		for(j=0;j< c;j++)
	 	{
             printf("Element in Multiplication matrix in [Row,Column]: [%d,%d] : %d ",i+1,j+1, matrix3[i][j]);
	 	}
		printf("\n");
	}
	return 0;	
}