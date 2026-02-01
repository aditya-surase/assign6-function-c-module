#include <stdio.h>

void areaTriangle();

int main() {
    areaTriangle();
    return 0;
}

void areaTriangle() {
    float b, h;
    printf("Enter base and height: ");
    scanf("%f %f", &b, &h);
    printf("Area of triangle = %.2f", 0.5 * b * h);
}