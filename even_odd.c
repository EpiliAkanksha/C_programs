//program to print number is even or odd
#include<stdio.h>
int main()
{
	int n;
	printf("\n Enter a number: ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("even number");
	}
	else
	{
		printf("odd number");
	}
	return 0;
}
