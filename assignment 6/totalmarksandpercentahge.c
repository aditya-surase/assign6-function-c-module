#include <stdio.h>

void marks();

int main() {
    marks();
    return 0;
}

void marks() {
    int m1, m2, m3, m4, m5;
    int total;
    float percent;
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percent = total / 5.0;
    printf("Total = %d\nPercentage = %.2f%%", total, percent);
}