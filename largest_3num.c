//largest of 3 numbers
#include<stdio.h>
int main()
{
	int a,b,c,max=0;
	printf("\n Enter three integers: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&& a>c)
	{
		max=a;
	}
	else if(b>a&&b>c)
	{
		max=b;
	}
	else
	{
		max=c;
	}
	printf("%d",max);
	return 0;
}
