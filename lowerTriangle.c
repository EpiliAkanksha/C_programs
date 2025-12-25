#include<stdio.h>
int main()
{
	int arr[4][4],n=4,i,j;
	printf("enter the elements: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("lower triangle: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>j)
			{
				printf("%d ",arr[i][j]);
			}
		}
	}
	printf("upper triangle: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<j)
			{
				printf("\n%d ",arr[i][j]);
			}
		}
	}
	return 0;
	
}
