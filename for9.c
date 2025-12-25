#include <stdio.h> 
 int main() { 
    int x = 5; 
    while (--x && x > 2) { 
        printf("%d ", x); 
    } 
    return 0; 
}
