#include<stdio.h>
int main()
{
	int a,b,c,d,e,max,min;
	printf("\n enter a value: ");
	scanf("%d",&a);
	printf("\n enter b value: ");
	scanf("%d",&b);
	printf("\n enter c value: ");
	scanf("%d",&c);
	d=a+b+c;
	printf("\n The sum is %d",d);
	e=(a+b+c)/3;
	printf("\n the avg is %d",e);
	if(a>=b&&a>=c)
	{
		max=a;
		
	}
	else if(b>=a && b>=c)
	{
		max=b;
	}
	else
	{
		max=c;
	}
	printf("\n the largest number is: %d",max);
	if(a<=b&&a<=c)
	{
		min=a;
		
	}
	else if(b<=a && b<=c)
	{
		min=b;
	}
	else
	{
		min=c;
	}
	printf("\n the smallest number is: %d",min);
	return 0;
	
}
