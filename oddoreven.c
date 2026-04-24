#include <stdio.h>

int main() {
    int num;

    // Asking for user input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Logic: if remainder when divided by 2 is 0
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}