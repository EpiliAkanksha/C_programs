#include<stdio.h>
int main()
{
	
	int mat[4][4]={ {1,2,3,4} , {5,6,7,8} , {10,15,20,25} , {100,25,50,60}};
	int i,j,n=4,s1=0,s2=0;
	//printf("\n diagonal 1 is: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				//printf("%d ",mat[i][j]);
				s1=s1+mat[i][j];
			}
			if(i+j==n-1)
			{
				s2=s2+mat[i][j];
			}
		}
		
	}
	if(s1>=s2)
	{
		printf("diagonal 1 is stronger,value is %d",s1);
	}
	else
	{
		printf("diagonal 2 is stronger,value is %d",s2);
	}
/*	printf("\n diagonal 2 is: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+j==n-1)
			{
				printf("%d ",mat[i][j]);
			}
		}
	}*/
	return 0;
}
