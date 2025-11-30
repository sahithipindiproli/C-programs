#include <stdio.h>
int main() {
    int i = 1;
    int number;

    printf("Enter the number = ");
    scanf("%d", &number);

    while (i <= number) {
        if (number % i == 0) {
            printf("%d\n", i);
        }
        i = i + 1;
    }
    return 0;
}

