//staircase problem in recursive approach
#include<stdio.h>
int main()
{
	int i,n,res;
	printf("Enter no. of stairs: ");
	scanf("%d",&n);
	res = recursive_stairs(n);
	printf("the no. of ways to reach top is: %d",res);
	return 0;
}
int recursive_stairs(int n)
{
	int i;
	if(n<=3)
	{
		return n;
	}
	else
	{
		return recursive_stairs(n-1)+recursive_stairs(n-2);
	}
}
