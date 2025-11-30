#include <stdio.h>

int main() {
    int a[50], n, i, large;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    large = a[0];

    for (i = 1; i < n; i++)
        if (a[i] > large)
            large = a[i];

    printf("Largest = %d", large);

    return 0;
}

