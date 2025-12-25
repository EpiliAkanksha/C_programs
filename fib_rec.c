#include<stdio.h>
int fib(int);
int main()
{
	int n,ans,i;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("\n fibonacci series is  : ");
	for( i=1; i <= n;i++)
	{
	
		ans=fib(i);	
		printf("%d ",ans);
	}
	return 0;
}
int fib(int n)
{
	if(n==0 || n==1)
		return n;
	else
		return fib(n-1)+fib(n-2);
}
