#include<stdio.h>
int main()
{
	int a,t,u,d;
	u=20;
	a=30;
	printf("enter the time interval: ");
	scanf("%d",&t);
	d=(u*t)+(a*t*t)/2;
	printf("the distance is %d",d);
	return 0;
}
