#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        if (i % 2 == 0)
            printf("%d ", i);
        else
            printf("E ");
    }
    return 0;
}
