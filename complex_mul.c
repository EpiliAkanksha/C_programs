#include <stdio.h>

// Define a struct for a Complex number
struct Complex   // user defined data type
{	
    int real;
    int imag;
};


int main() 
{
    struct Complex c1, c2, c3;
    //printf("\n Size of c1 = %d\n",sizeof(c1));
   // printf("\n Size of int = %d\n",sizeof(int));
   // printf("\n Size of double = %d\n",sizeof(double));


    // Input for the first complex number
    printf("Enter the real and imaginary part of the first complex number:\n");
    scanf("%d %d", &c1.real, &c1.imag);

    // Input for the second complex number
    printf("Enter the real and imaginary part of the second complex number:\n");
    scanf("%d %d", &c2.real, &c2.imag);

    // Add the two complex numbers
    
    c3.real = c1.real * c2.real - c1.imag *c2.imag ;
    c3.imag = c1.real * c2.imag + c1.imag * c2.real ;

    // Display the result
    printf("product = %d + %d i\n", c3.real, c3.imag);

    return 0;
}

