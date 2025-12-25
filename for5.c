#include <stdio.h> 
int main() { 
    int i = 1; 
    do { 
        printf("%d ", i); 
        if (i % 2 == 0) 
            i=i+1; 
        else 
            i += 2; 
    } while (i < 5); 
    return 0; 
}
