#include<stdio.h>
int main()
{
	int *x,*y,*z,p=7,q=20,r=15;
	x=&p;
	printf("\n (address of p) x = %d  x = %p  x = %u",x,x,x);
	printf("\n *x = %d",*x);
	x=&q;
	printf("\n (address of q)x = %d",x);
	printf("\n *x = %d",*x);
	x=&r;
	printf("\n (address of r)x = %d",x);
	printf("\n *x = %d",*x);
	x=&p;
	y=&q;
	z=&r;
	*x=*x+*y;
	printf("\n p = %d , q = %d , r = %d",p,q,r);
	*y= *x + ( *z);
	printf("\n p = %d , q = %d , r = %d",p,q,r);
	return 0;
}
