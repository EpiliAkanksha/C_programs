//celsius to fahrenheit conversion
#include<stdio.h>
int main()
{
	printf("enter temp in celsius: ");
	float a,b;
	scanf("%f",&a);
	b =  ((9.0/5)*a) + 32;
	printf("temp in fahrenheit: %.2f",b);
	
	return 0;
}
