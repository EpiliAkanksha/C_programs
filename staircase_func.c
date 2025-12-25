//staircase problem with function approach
#include<stdio.h>
int main()
{
	int n,res;
	printf("enter no. of stairs: ");
	scanf("%d",&n);
	res = stairs_fun(n);
	printf("The no. ways to reach top = %d",res);
	return 0;
}
int stairs_fun(int n)
{
	int i,step[100];
	step[0]=0;
	step[1]=1;
	step[2]=2;
	
	for(i=3;i<=n;i++)
	{
		step[i]=step[i-1]+step[i-2];
	}
	return step[n];		
}
