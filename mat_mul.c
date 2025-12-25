//matrix multiplication
# include <stdio.h>
int main()
{
	int r1,r2,c1,c2,i,j,k;
	int a[5][5],b[5][5],c[5][5];
	printf("\nEnter the dimension of matrix A: ");
	scanf("%d %d",&r1,&c1);
	printf("\nEnter the dimension of matrix B: ");
	scanf("%d %d",&r2,&c2);
	if(c1==r2)
	{
		printf("\n matrix multiplication is possible");
		printf("\n Enter elements of matrix A:  \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("\n Enter elements of matrix B:  \n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		printf("\n elements of resultant matrix C:  \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<c1;k++)
				{
					c[i][j]+=a[i][k]*b[k][j];
				}
				printf("%4d",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("\n matrix multiplication is not possible");
	}
	
	return 0;
}
