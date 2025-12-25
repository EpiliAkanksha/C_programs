#include<stdio.h>
int fib(int n)
{
	if(n==0 || n==1)
	{
		return n;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}
int main()
{
	int n,i,res;
	printf("Enter n value: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		res=fib(i);
		printf("%d ",res);
	}
	
	return 0;
}
