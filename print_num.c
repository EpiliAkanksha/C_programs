#include<stdio.h>
void print_num(int);
int main()
{
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	print_num(n);
	return 0;
}
void print_num(int n)
{
	if (n==0)
	{
		return;
	}
	else
	{
	
		print_num(n-1);
		printf("%d ",n);
	}
	
}
