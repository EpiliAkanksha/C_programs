#include<stdio.h>

void print_series(int, int, int);  // Function to print the series recursively

int main() {
    int x, n;
    printf("Enter x and n: ");
    scanf("%d %d", &x, &n);

    printf("\nSeries: 1 - %d", x);
    print_series(x, n, 2);  // Start printing from the 2nd term
    return 0;
}

// Recursive function to print the series with alternating signs
void print_series(int x, int n, int i) {
    if (i > n)
        return;  // Base case: Stop when i exceeds n
    
    // Decide if the term should be negative or positive based on i
    if (i % 2 == 0)
        printf(" + %d ^ %d / %d!", x, i, i);  // Even terms are negative
    else
        printf(" - %d ^ %d / %d!", x, i, i);  // Odd terms are positive
    
    // Recursive call for the next term
    print_series(x, n, i + 1);
}

