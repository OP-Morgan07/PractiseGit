#include <stdio.h>
#include <math.h>
int S;
void Addition(int m1, int m2, int n1, int n2, int mat1[m1][n1], int mat2[m2][n2])
{
	int i, j;
	printf("\nThe matrix formed by adding the two given matrices is: \n");
	for (i = 0; i <= m1 - 1; i++)
	{
		for (j = 0; j <= n1 - 1; j++)
		{
			printf("%d\t", mat1[i][j] + mat2[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n\n");
}
void Subtraction(int m1, int m2, int n1, int n2, int mat1[m1][n1], int mat2[m2][n2])
{
	int i, j;
	printf("\nThe matrix formed by subtracting the two given matrices is: \n");
	for (i = 0; i <= m1 - 1; i++)
	{
		for (j = 0; j <= n1 - 1; j++)
		{
			printf("%d\t", mat1[i][j] - mat2[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n\n");
}
void Multiplication(int m1, int m2, int n1, int n2, int mat1[m1][n1], int mat2[m2][n2])
{
	int i, j, k;
	printf("\nThe matrix formed by the multiplication of the two given matrices is: \n");
	int mat3[m1][n2];
	for (i = 0; i <= m1 - 1; i++)
	{
		for (j = 0; j <= n2 - 1; j++)
		{
			mat3[i][j] = 0;
			for (k = 0; k <= m2 - 1; k++)
			{

				mat3[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}
	for (i = 0; i <= m1 - 1; i++)
	{
		for (j = 0; j <= n2 - 1; j++)
		{
			printf("%d\t", mat3[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n\n");
}
void Solve(int x, int aug[x][x], float c[x][1])
{
	CoFactor(x, x, aug, c);
}
void Solution(int m, int n, float mat1[m][n], float mat2[m][1])
{
	int i, j, k;
	float mat3[m][1];
	for (i = 0; i <= m - 1; i++)
	{
		for (j = 0; j <= 0; j++)
		{
			mat3[i][j] = 0;
			for (k = 0; k <= m - 1; k++)
			{
				mat3[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}
	printf("Values of the variables are : \n");
	for (i = 0; i < m; i++)
	{
		printf("Variable %c = %f\n", i + 97, mat3[i][0]);
	}
}
int Determinant(int m, int n, int matrix[m][n])
{
	int admat[m - 1][n - 1], k, l, det, j;
	if (m == 1 && n == 1)
	{
		det = matrix[0][0];
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
		sum += pow(-1, j) * matrix[0][j] * Determinant(m - 1, n - 1, admat);
	}
	return sum;
}
void Transpose(int m, int n, int trans[m][n])
{
	int i, j, transdone[n][m];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			transdone[i][j] = trans[j][i];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d\t", transdone[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n\n");
}
void Inverse(int m, int n, int trans[m][n], int det[m][n], float c[m][1])
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
			adj[i][j] = (float)(trans[i][j]) / (float)(Determinant(m, n, det));
		}
		printf("\n");
	}
	if (S == 4)
	{
		Solution(m, n, adj, c);
	}
	else
	{

		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				printf("%.2f \t", adj[i][j]);
			}
			printf("\n\n");
		}
		printf("\n\n\n");
	}
}
int CoFactor(int m, int n, int inverse[m][n], float c[m][1])
{

	if (Determinant(m, n, inverse) == 0)
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
			adj[i][j] = pow(-1, i + j) * Determinant(m - 1, n - 1, admat);
		}
	}

	Inverse(m, n, adj, inverse, c);
}
int Select()
{
	int m, n, i, j, m1, n1, m2, n2;
	printf("\nPlease Select Which Operation Do You Want To Perform on the matrices.......\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Linear Equations\n 5. Determinant\n 6. Transpose\n 7. Inverse\n 8. Exit\n");
	printf("Enter Your Choice : ");
	scanf("%d", &S);
	if (S >= 1 && S < 5 && S != 4)
	{
		printf("NOTE: The operations will take place in the order of the entered matrices.\n\n");
		printf("Enter Order Of First Matrix(m n) : ");
		scanf("%d %d", &m1, &n1);
		printf("Enter Order Of Second Matrix(m n) : ");
		scanf("%d %d", &m2, &n2);
		printf("\n");
		if ((S == 1 || S == 2) && (m1 != m2 || n1 != n2))
		{
			printf("This Operation Only Works On Matrices having same order.\nSo Please Enter Same Order Of Matrices");
			Select();
		}
		if (S == 3 && n1 != m2)
		{
			printf("This Operation is Not Work On These Type Of Matrices.");
			Select();
		}
		int mat1[m1][n1], mat2[m2][n2];
		for (i = 0; i < m1; i++)
		{
			for (j = 0; j < n1; j++)
			{
				printf("Enter (%d,%d) Element Of First Matrix:  ", i, j);
				scanf("%d", &mat1[i][j]);
			}
			printf("\n");
		}
		for (i = 0; i < m2; i++)
		{
			for (j = 0; j < n2; j++)
			{
				printf("Enter (%d,%d) Element Of Second Matrix:  ", i, j);
				scanf("%d", &mat2[i][j]);
			}
			printf("\n");
		}
		printf("First Matrix Have: \n\n");
		for (i = 0; i < m1; i++)
		{
			for (j = 0; j < n1; j++)
			{
				printf("%d \t", mat1[i][j]);
			}
			printf("\n\n");
		}
		printf("\n\n\n");
		printf("Second Matrix: \n\n");
		for (i = 0; i < m2; i++)
		{
			for (j = 0; j < n2; j++)
			{
				printf("%d\t", mat2[i][j]);
			}
			printf("\n\n");
		}
		printf("\n\n\n");
		if (S == 1)
		{
			Addition(m1, m2, n1, n2, mat1, mat2);
			printf("\n");
			Select();
		}
		else if (S == 2)
		{
			Subtraction(m1, m2, n1, n2, mat1, mat2);
			printf("\n");
			Select();
		}
		else if (S == 3)
		{
			Multiplication(m1, m2, n1, n2, mat1, mat2);
			printf("\n");
			Select();
		}
	}
	if (S == 4)
	{
		int x, i, j;
		printf("Enter the number of variables you want to work with: ");
		scanf("%d", &x);
		printf("\n The variables so formed will be a,b,c,d..... depending on the number of variables entered.\n");
		printf("\n");

		printf("Enter coefficiants of the %d linear equations: \n", x);
		int aug[x][x];
		for (i = 0; i < x; i++)
		{
			for (j = 0; j < x; j++)
			{
				printf("Enter coefficiant %c in the linear equation %d: ", j + 97, i + 1);
				scanf("%d", &aug[i][j]);
			}
		}
		float c[x][1];
		printf("Enter the constants of the given %d linear equations: \n", x);
		for (i = 0; i < x; i++)
		{
			for (j = 0; j < 1; j++)
			{
				printf("Enter the constant of equation %d: ", i + 1);
				scanf("%f", &c[i][j]);
			}
		}
		Solve(x, aug, c);
		Select();
	}
	if (S >= 5 && S != 8)
	{
		printf("Enter Order Of Matrix(m n) : ");
		scanf("%d %d", &m, &n);
		if (m != n && (S == 5 || S == 7))
		{
			printf("This Operation is Only Work On Same Order Of Matrix");
			Select();
		}
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
				printf("%d\t", mat[i][j]);
			}
			printf("\n\n");
		}
		printf("\n\n\n");
		if (S == 5)
		{
			printf("Determinant Of This Matrix Is : %d \n", Determinant(m, n, mat));
			Select();
		}
		else if (S == 6)
		{
			printf("Transpose Of This Matrix Is......\n");
			Transpose(m, n, mat);
			Select();
		}
		else if (S == 7)
		{
			printf("Inverse Of You Matrix Is.......\n");
			CoFactor(m, n, mat, abc);
			Select();
		}
	}
	if (S > 8)
	{
		printf("The number you have entered is not valid\n");
		Select();
	}
	if (S == 8)
	{
		return 0;
	}
}
void main()
{
	Select();
}
