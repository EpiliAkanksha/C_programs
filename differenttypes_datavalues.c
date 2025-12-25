#include<stdio.h>
int main()
{
	int a;
	char b;
	float c;
	double d;
	printf("enter the value of a: \n");
	fflush(stdin);
	scanf("%d",&a);
	printf("enter the value of b: \n");
	fflush(stdin);
	scanf("%c",&b);
	printf("enter the value of c: \n");
	fflush(stdin);
	scanf("%f",&c);
	printf("enter the value of d: \n");
	fflush(stdin);
	scanf("%lf",&d);
	printf("\n value of a is %d",a);
	printf("\n value of b is %c",b);
	printf("\n value of c is %f",c);
	printf("\n the value of d %lf",d);
	return 0;
}
