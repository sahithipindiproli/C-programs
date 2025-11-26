#include <stdio.h>

int sum(int);

int main() {
    int n;
    printf("Enter n value: ");
    scanf("%d", &n);

    int sum_n = sum(n);
    printf("The result is %d", sum_n);

    return 0;
}

int sum(int x) {
    int i, s = 0;
    for (i = 1; i <= x; i++) {
        s = s + i;
    }
    return s;
}

