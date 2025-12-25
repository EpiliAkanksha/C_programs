#include<stdio.h>
int main()
{
	int t,x=10,y=20,z=30;
	t=x;
	x=y;
	y=z;
	z=t;
	printf("\n x= %d",x);
	printf("\n y= %d",y);
	printf("\n z= %d",z);
	return 0;
}
