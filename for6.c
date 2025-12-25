
int main() {
    int x = 10, total = 0;
    do {
        if (x % 3 != 0)
            total += x;
        --x;
    } while (x >= 5);
    printf("%d", total);
    return 0;
}
