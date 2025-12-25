#include <stdio.h>
int main()
{
	int a,b,c;
	float d;
	printf("enter the height : ");
	scanf("%d%d",&a,&b);
	c=(a*12) + b;
	d=c*2.54;
	
	
	printf("total height in cm: %.2f",d);
	
	return 0;
}
