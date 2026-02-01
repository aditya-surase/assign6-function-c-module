#include <stdio.h>

void add();          // function declaration

int main() {
    add();          // function call
    return 0;
}

void add() {        // function definition
    int a, b;
    printf("Enter value of a and b: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d", a + b);
}