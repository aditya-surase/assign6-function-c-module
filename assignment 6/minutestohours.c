#include <stdio.h>

void convertMinutes();

int main() {
    convertMinutes();
    return 0;
}

void convertMinutes() {
    int min;
    printf("Enter minutes: ");
    scanf("%d", &min);
    printf("%d hours %d minutes", min/60, min%60);
}