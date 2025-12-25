#include<stdio.h>
int main()
{
	int a=0,b=1,i,c,n;
	
	printf("enter the value of n: ");
	scanf("%d",&n);
	printf("fibonacci series: %3d%3d",a,b);
	c=a+b;
	for(i=3;c<n;++i)
	{
		
		printf("%3d",c);
		a=b;
		b=c;
		c=a+b;
		
	}
	if(c-n<n-b)
		printf("%3d",c);
	
	return 0;
}
