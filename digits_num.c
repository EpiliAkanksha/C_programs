#include <stdio.h>

int main() 
{
    int num, reverse = 0, original, last_digit;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) 
	{
        printf("-");
        num = -num;
    }

    original = num;

    while (num > 0) 
	{
        last_digit = num % 10;
        reverse = reverse * 10 + last_digit;
        num /= 10;
    }
    
    printf("Digits of the number are: ",num);
    
    while (reverse > 0) {
        printf("%d ", reverse % 10);
        reverse /= 10;
    }

    if (original == 0) {
        printf("0");
    }

    return 0;
}

