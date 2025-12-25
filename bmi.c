#include <stdio.h>
void cal_bmi(float w,float h)// called function
{	
	float bmi;
	bmi = w / (h * h);
	printf("BMI = %.2f\n", bmi);
    if (bmi < 18.5)
        printf("Underweight\n");
    else if (bmi >= 18.5 && bmi < 24.9)
        printf("Normal weight\n");
    else if (bmi >= 25 && bmi < 29.9)
        printf("Overweight\n");
    else
        printf("Obese\n");  
	return; 
}

int main() // calling function
{
    float weight, height, bmi;

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);
    cal_bmi(weight,height);
    

    

    return 0;
}

