#include<stdio.h>
//funct1: no parameter and no return type
//funct2: with parameter and with return type
//funct3:no parameter with return type
//funct4:with parameter and no return type
void bmi(float weight,float height)//formal parameter
{
	float B;
	B=weight/(height*height);
	printf("BMI=%.2f",B);

}

int main()
{ 
	float B;
	float weight,height;
	printf("enter w&h: ");
	scanf("%f%f",&weight,&height);
	bmi(weight,height);// actual parameter
	

	
	return 0;
}
