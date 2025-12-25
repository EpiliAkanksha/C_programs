#include<stdio.h>
int main()
{
	double f,x;
	int lc,r,c;
	printf("enter the lc: ");
	scanf("%d",&lc);
	printf("enter r : ");
	scanf("%d",&r);
	printf("enter c: ");
	scanf("%d",&c);
	x=(1.0/lc)-(r*r)/(4.0*c*c);
	f= sqrt(x);
	printf("frequency: %lf",f);
	return 0;
}
