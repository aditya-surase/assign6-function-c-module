#include <stdio.h>

void areaCircle();

int main() {
    areaCircle();
    return 0;
}

void areaCircle() {
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area of circle = %.2f", 3.14 * r * r);
}