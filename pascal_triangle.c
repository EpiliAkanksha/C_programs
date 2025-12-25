#include<stdio.h>
int main()
{
	int i,j,n,arr[10][10];
	printf("enter number of rows: ");
	scanf("%d",&n);
	//dynamic programming approach
	printf("\n Pascal Triangle\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j==0 || i==j)
			{
				arr[i][j]=1;
			}
			else
			{
				arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
			
			}
			
			printf("%5d",arr[i][j]);
		}
		printf("\n");
		
	}
	return 0;
}
