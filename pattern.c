#include <stdio.h>
#include <string.h>

int main() 
{
    char number[20];
    printf("Enter an integer: ");
    scanf("%s", number);

    int length = strlen(number);
	int i;
    for ( i = 0; i < length; i++) 
	{
        printf("%s\n", &number[i]);
    }

    return 0;
}

