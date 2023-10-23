#include <stdio.h>


int main(){

	int m, n, a, b;
	
	printf("Enter the no. of rows in the first matrix: \n");
	scanf("%d", &m);
	
	printf("Enter the no. of columns in the first matrix: \n");
	scanf("%d", &n);

	printf("Enter the no. of rows in the second matrix: \n");
	scanf("%d", &a);

	printf("Enter the no. of columns in the second matrix: \n");
	scanf("%d", &b);

	if(m != a || n != b) printf("Enter valid rank of matrices to add\n");
	else{

	int matrix1[m][n];
	int matrix2[a][b];
	int matrix3[a][b];

		printf("Enter the elements of first matrix:\n");
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				scanf("%d", &matrix1[i][j]);
			}
		}


		printf("Enter the elements of second matrix:\n");
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				scanf("%d", &matrix2[i][j]);
			}
		}

		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
			}
		}

		printf("\nThe addition of two matrices is:\n");
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				printf("%d ", matrix3[i][j]); 
			}
			printf("\n");
		}
	}

return 0;
}
