#include <stdio.h>

void perimeter();

int main() {
    perimeter();
    return 0;
}

void perimeter() {
    int l, w;
    printf("Enter length and width: ");
    scanf("%d %d", &l, &w);
    printf("Perimeter = %d", 2 * (l + w));
}