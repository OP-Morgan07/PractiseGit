#include <stdio.h>
#include <math.h>
int S;
void multiplication1(int m, int n, float mat1[m][n], float mat2[m][1])
{
	
	float mat3[m][1];
	for (int i = 0; i <= m - 1; i++)
	{
		for (int j = 0; j <= 0; j++)
		{
			mat3[i][j] = 0;
			for (int k = 0; k <= m - 1; k++)
			{
				mat3[i][j] += mat1[i][k] * mat2[k][j];
			}

		}
	}
		printf("Values of the variables are : \n");
		for (int l = 0; l < m; l++)
		{
			printf("Variable a%d = %f\n", l + 1, mat3[l][0]);
		}
}
void multiplication(int m1, int m2, int n1, int n2, int mat1[m1][n1], int mat2[m2][n2])
{
	printf("\nThe matrix formed by the multiplication of the two given matrices is: \n");
	int mat3[m1][n2];
	for (int i = 0; i <= m1 - 1; i++)
	{
		for (int j = 0; j <= n2 - 1; j++)
		{
			mat3[i][j] = 0;
			for (int k = 0; k <= m2 - 1; k++)
			{

				mat3[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}

	
		printf("Values of the variables are : ");
		for (int l = 0; l < m1; l++)
		{
			printf("Variable a%d = %d\n", l + 1, mat3[l][1]);
		}
	
		for (int i = 0; i <= m1 - 1; i++)
		{
			for (int j = 0; j <= n2 - 1; j++)
			{
				printf("%d  ", mat3[i][j]);
			}
			printf("\n");
		}
	
	return;
}
void transpose(int m, int n, int trans[m][n])
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			int temp = trans[i][j];
			trans[i][j] = trans[j][i];
			trans[j][i] = temp;
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", trans[i][j]);
		}
		printf("\n");
	}
}
int determinant(int m, int n, int matrix[m][n])
{
	int admat[m - 1][n - 1], k, l, det, j;
	if(m==1 && n==1){
		det=matrix[0][0];
		return det;
	}
	if (m == 2 && n == 2)
	{
		det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
		return det;
	}
	int sum = 0;
	for (j = 0; j < n; j++)
	{
		int o = 0, p;
		for (k = 0; k < m; k++)
		{
			if (k != 0)
			{
				p = 0;
				for (l = 0; l < n; l++)
				{
					if (l != j)
					{
						admat[k - o][l - p] = matrix[k][l];
					}
					else
						p++;
				}
			}
			else
				o++;
		}
		sum += pow(-1, j) * matrix[0][j] * determinant(m - 1, n - 1, admat);
	}
	return sum;
}
void transinver(int m, int n, int trans[m][n], int det[m][n], float c[m][1])
{
	int i, j;
	float adj[m][m];
	for (i = 0; i < m; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			int temp = trans[i][j];
			trans[i][j] = trans[j][i];
			trans[j][i] = temp;
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			adj[i][j] = (float)(trans[i][j]) / (float)(determinant(m, n, det));
		}
		printf("\n");
	}
	if (S == 4)
	{
		multiplication1(m, n, adj, c);
	}
else{

		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				printf("%.2f \t", adj[i][j]);
			}
			printf("\n");
		}
	}
}
int inverse(int m, int n, int inverse[m][n], float c[m][1])
{
	
	if (determinant(m, n, inverse) == 0)
	{
		printf("Inverse Is Not Define\n");
		return 0;
	}
	int admat[m - 1][n - 1], k, l, j, i, adj[m][n];
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			int o = 0, p;
			for (k = 0; k < m; k++)
			{
				if (k != i)
				{
					p = 0;
					for (l = 0; l < n; l++)
					{
						if (l != j)
						{
							admat[k - o][l - p] = inverse[k][l];
						}
						else
							p++;
					}
				}
				else
					o++;
			}
			adj[i][j] = pow(-1, i + j) * determinant(m - 1, n - 1, admat);
		}
	}

	transinver(m, n, adj, inverse, c);
}
void addition(int m1, int m2, int n1, int n2, int mat1[m1][n1], int mat2[m2][n2])
{
	printf("\nThe matrix formed by adding the two given matrices is: \n");
	for (int i = 0; i <= m1 - 1; i++)
	{
		for (int j = 0; j <= n1 - 1; j++)
		{
			printf("%d  ", mat1[i][j] + mat2[i][j]);
		}
		printf("\n");
	}
}
void subtraction(int m1, int m2, int n1, int n2, int mat1[m1][n1], int mat2[m2][n2])
{
	printf("\nThe matrix formed by subtracting the two given matrices is: \n");
	for (int i = 0; i <= m1 - 1; i++)
	{
		for (int j = 0; j <= n1 - 1; j++)
		{
			printf("%d  ", mat1[i][j] - mat2[i][j]);
		}
		printf("\n");
	}
}
void solve(int x, int aug[x][x], float c[x][1])
{
	inverse(x, x, aug, c);
}

int select()
{
	int m, n, i, j, m1, n1, m2, n2;
	printf("\nPlease Select Which Operation Do You Want To Perform on the matrices.......\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Linear Equations\n 5. Determinant\n 6. Inverse\n 7. Transpose\n 8. Exit\n");
	scanf("%d", &S);
	if (S > 9)
	{
		printf("The number you have entered is not valid\n");
		select();
	}
	if (S == 8)
	{
		return 0;
	}
		if (S == 4)
	{
		int x;
		printf("Enter the number of variables you want to work with: ");
		scanf("%d", &x);
		printf("\n");

		printf("Enter the coefficiants of the %d linear equations: \n", x);
		int aug[x][x];
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < x; j++)
			{
				printf("Enter coefficiant %d of linear equation %d: ", j + 1, i + 1);
				scanf("%d", &aug[i][j]);
			}
		}
		float c[x][1];
		printf("Enter the constants of the given %d linear equations: \n", x);
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < 1; j++)
			{
				printf("Enter the constant of equation %d: ", i + 1);
				scanf("%f", &c[i][j]);
			}
		}
		solve(x, aug, c);
		select();
	}
	if (S >= 5 && S != 8)
	{
		printf("Enter Order Of Matrix(m n) : ");
		scanf("%d %d", &m, &n);
		int mat[m][n];
		float abc[m][n];
		
		printf("Enter elements : \n\n");
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				printf("Enter (%d,%d) Element Of Matrix:  ", i, j);
				scanf("%d", &mat[i][j]);
			}
			printf("\n");
		}
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				printf("%d \t", mat[i][j]);
			}
			printf("\n");
		}
		printf("\n\n\n");
		if (S == 5)
		{
			printf("Determinant Of This Matrix Is : %d \n", determinant(m, n, mat));
			select();
		}
		else if (S == 6)
		{
			printf("Inverse Of You Matrix Is.......\n");
			inverse(m, n, mat, abc);
			select();
		}
		else if (S == 7)
		{
			printf("Transpose Of This Matrix Is......\n");
			transpose(m, n, mat);
		}
	}
	else
	{
		printf("NOTE: The operations will take place in the order of the entered matrices.\n\n");
		printf("Enter Order Of First Matrix(m n) : ");
		scanf("%d %d", &m1, &n1);
		printf("\n");
		int mat1[m1][n1], mat2[m2][n2];
		for (i = 0; i < m1; i++)
		{
			for (j = 0; j < n1; j++)
			{
				printf("Enter (%d,%d) Element Of First Matrix:  ", i, j);
				scanf("%d", &mat1[i][j]);
			}
		}
		printf("Enter Order Of Second Matrix(m n) : ");
		scanf("%d %d", &m2, &n2);
		for (i = 0; i < m2; i++)
		{
			for (j = 0; j < n2; j++)
			{
				printf("Enter (%d,%d) Element Of Second Matrix:  ", i, j);
				scanf("%d", &mat2[i][j]);
			}
		}
		if (S == 1)
		{
			if (m1 == m2 && n1 == n2)
			{
				addition(m1, m2, n1, n2, mat1, mat2);
				printf("\n");
			}
			else
				printf("Sorry....The addition operation cannot be performed on these matrices\n");
			select();
		}
		else if (S == 2)
		{
			if (m1 == m2 && n1 == n2)
			{

				subtraction(m1, m2, n1, n2, mat1, mat2);
				printf("\n");
			}
			else
				printf("Sorry....The subtraction operation cannot be performed on these matrices\n");
			select();
		}
		else if (S == 3)
		{
			if (m2 == n1)
			{
				multiplication(m1, m2, n1, n2, mat1, mat2);
				printf("\n");
			}
			else
				printf("Sorry....The multiplication operation cannot be performed on these matrices\n");
			select();
		}
	}
}
void main()
{
	select();
}