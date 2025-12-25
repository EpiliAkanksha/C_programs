#include<stdio.h>
int power(int,int);
int main()
{
	int a,b,result;
	printf("enter a and b: ");
	scanf("%d%d",&a,&b);
	result=power(a,b);
	printf("\n result: %d",result);
	return 0;
}
int power(int a,int b)
{
	if(a==0)
	{
		return 0;
	}
	else if(b==0)
	{
		return 1;
	}
	else
	{
		return a*power(a,b-1);
	}
}
