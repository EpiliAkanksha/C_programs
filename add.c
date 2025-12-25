// add two numbers
# include<stdio.h>
int main()
{	
	// "%d %f %c %s %lf %ld %u"
	float a,b,c,d,e;
	float f;
	printf("Enter two numbers : ");
	scanf("%f%f",&a,&b);
	c=a+b;
	printf("sum = %.2f",c);
	d=a-b;
	printf("\ndiff = %.2f",d);
	e=a*b;
	printf("\n prod = %.2f",e);
	f=a/b;
	printf("\n div = %.2f",f);
	
	return 0;
}
