#include<stdio.h>
int main()
{
	float num;
	int integral_part,rmd;
	printf("Enter a floating-point number: ");
    scanf("%f", &num);
    integral_part = (int)num;
    rmd = integral_part % 10;
    printf("The rightmost digit of the integral part is: %d\n", rmd);
}
