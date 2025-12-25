#include<stdio.h>

int armstrong(int);

int main() {
    int n1, n2, i;
    printf("Enter n1 and n2: ");
    scanf("%d %d", &n1, &n2);

    printf("\nArmstrong numbers between %d and %d are: ", n1, n2);
    for (i = n1; i <= n2; i++) {
        if (armstrong(i) == i)	
            printf("%d ", i);
    }
    return 0;
}

int armstrong(int n) {
    int d;
    if (n == 0) 
        return 0;   // Base case for recursion
    d = n % 10;    // Get last digit
    return (d * d * d) + armstrong(n / 10);  // Recursive sum of cubes
}

// 153   371   370   407
// 
