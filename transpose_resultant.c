#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],r1,c1,r2,c2,i,j;
	printf("enter the order of matrix a: ");
	scanf("%d %d",&r1,&c1);
	r2=c1;
	c2=r1;
	printf("\n enter elements of matrix a: ");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n transpose of a matrix: \n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			b[i][j]=a[j][i];
			printf("%4d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
