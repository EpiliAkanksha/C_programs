#include<stdio.h>
int main()
{
	int m,n;
	printf("enter m value: ");
	scanf("%d",&m);
	printf("enter n value: ");
	scanf("%d",&n);
	if(m%n==0)
	{
		printf("m is multiple of n ");
	}
	else
	{
		printf("m is not multiple of n ");
	}
	return 0;
}
