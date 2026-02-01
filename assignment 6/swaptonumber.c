#include <stdio.h>

void swap();

int main() {
    swap();
    return 0;
}

void swap() {
    int a, b, temp;
    printf("Enter value of a and b: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a=%d b=%d", a, b);
}