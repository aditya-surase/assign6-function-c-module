#include <stdio.h>

void convertTemp();

int main() {
    convertTemp();
    return 0;
}

void convertTemp() {
    float c;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    printf("Fahrenheit = %.2f", (c * 9 / 5) + 32);
}