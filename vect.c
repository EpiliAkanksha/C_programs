#include <stdio.h>
struct Vector {
    int x;
    int y;
};
int main() {
    struct Vector vectors[3] = {{1, 2}, {3, 4}, {5, 6}};
    printf("%d %d", (vectors + 2)->x, (vectors + 1)->y);
    return 0;
}
