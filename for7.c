#include <stdio.h> 
int main() { 
    int num = 10; 
    do { 
        printf("%d ", num); 
        num <<= 1; 
    } while (num < 50); 
    return 0; 
}
