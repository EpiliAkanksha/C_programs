#include <stdio.h>

int power(int, int);

void main() {
    int input1, input2, result;
    
    printf("\nEnter input1 and input2: ");
    scanf("%d %d", &input1, &input2);
    
    if (input1 == 0) {
        printf("Invalid\n");
    } else {
        result = power(input1, input2);
        printf("\nResult = %d\n", result);
    }
}

int power(int input1, int input2) {
    if (input2 == 0) {
        return 1;
    } else {
        return input1 * power(2 * input1, input2 / 2);
    }
}

