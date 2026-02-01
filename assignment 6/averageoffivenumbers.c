#include <stdio.h>

void average();

int main() {
    average();
    return 0;
}

void average() {
    int a, b, c, d, e;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("Average = %.2f", (a + b + c + d + e) / 5.0);
}