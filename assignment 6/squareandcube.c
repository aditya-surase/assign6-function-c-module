#include <stdio.h>

void squareCube();

int main() {
    squareCube();
    return 0;
}

void squareCube() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Square = %d\nCube = %d", n*n, n*n*n);
}