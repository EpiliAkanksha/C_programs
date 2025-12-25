#include <stdio.h>
int main() 
{
    int n,matrix[10][10],trace=0,i,j;
    
    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++)
	{
        trace += matrix[i][i];  
    }
    printf("The trace of the matrix is: %d\n", trace);

    return 0;
}

