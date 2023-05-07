#include <stdio.h>
int main()
{
	int i,j,r,c;

//Taking row & column input
    printf("Enter number of Rows :");
	scanf("%d",&r);
	printf("Enter number of Cols :");
	scanf("%d",&c);

//taking matrix 1 input 
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
	int matrix2[r][c];
    printf("MATRIX 2:\n");
	printf("\nEnter matrix elements :\n");
	for(i=0;i< r;i++)
	{
		for(j=0;j< c;j++)
		{
			printf("Enter element [%d,%d] : ",i+1,j+1);
			scanf("%d",&matrix2[i][j]);
		}
	}

//generating sum matrix
	int matrix3[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			matrix3[i][j] =	matrix1[i][j] + matrix2[i][j];
		}
	}

 //printing sum matrix
    for(i=0;i< r;i++)
	{
		for(j=0;j< c;j++)
		{
            printf("Element in SUM matrix in [Row,Column]: [%d,%d] : %d ",i+1,j+1, matrix3[i][j]);
		}
	}
	return 0;	
}