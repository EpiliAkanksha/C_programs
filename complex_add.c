#include <stdio.h>

// Define a struct for a Complex number
struct Complex   // user defined data type
{	
    int real;
    int imag;
};


int main() 
{
    struct Complex num1, num2, num3;

    // Input for the first complex number
    printf("Enter the real and imaginary part of the first complex number:\n");
    scanf("%d %d", &num1.real, &num1.imag);

    // Input for the second complex number
    printf("Enter the real and imaginary part of the second complex number:\n");
    scanf("%d %d", &num2.real, &num2.imag);

    // Add the two complex numbers
    
    num3.real = num1.real + num2.real;
    num3.imag = num1.imag + num2.imag;

    // Display the result
    printf("Sum = %d + %d i\n", num3.real, num3.imag);

    return 0;
}

