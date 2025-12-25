#include<stdio.h>
int main()
{
	printf("enter the temp in fahrenheit: ");
	float a,b;
	scanf("%f",&a);
	b=(a- 32)* 5/9.0;
	printf("temp in celsius: %.2f",b);
	return 0;
}
