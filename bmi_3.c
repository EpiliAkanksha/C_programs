#include<stdio.h>
//funct1: no parameter and no return type
//funct2: with parameter and with return type
//funct3:no parameter with return type
//funct4:with parameter and no return type
float bmi()//formal parameter
{
	float B;
	float weight,height;
	printf("enter w&h: ");
	scanf("%f%f",&weight,&height);


	B=weight/(height*height);
	return B;


}

int main()
{ 
	float B;
	
	
	B=bmi();// actual parameter
	
	printf("BMI=%f",B);

	
	return 0;
}
