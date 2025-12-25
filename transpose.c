#include<stdio.h>
int main()
{
	int i,j,p,q,a[10][10],t;
	printf("\n Enter the order of matrix: ");
	scanf("%d%d",&p,&q);
	printf("\n Enter the elements of the matrix: \n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n the original matrix is: \n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n The transpose of the matrix is: \n");
	for(i=0;i<p;i++)
	{
		for(j=i;j<q;j++)
		{
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
	}
	
	for(i=0;i<q;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
