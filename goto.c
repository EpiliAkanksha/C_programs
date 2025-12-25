#include<stdio.h>
int main()
{
	int num;
	printf("enter a number: ");
	scanf("%d",&num);
	if(num%2==0)
	{
		goto even;
	}
	else
	{
		goto odd;
	}
	even: printf("%d is even number",num);
	odd: printf("\n%d is odd number",num);
	return 0;
}
