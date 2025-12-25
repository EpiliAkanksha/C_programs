#include<stdio.h>
//funct1: no parameter and no return type
//funct2: with parameter and with return type
//funct3:no parameter with return type
//funct4:with parameter and no return type
void bmi()
{
	float bmi;
	float w,h;
	printf("enter w&h: ");
	scanf("%f%f",&w,&h);
	bmi=w/(h*h);
	printf("bmi: %.2f",bmi);
}

int main()
{ 
	bmi();
	
	return 0;
}
