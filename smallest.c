#include <stdio.h>

int main() {
    int a[50], n, i, small;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    small = a[0];   // start with 1st element

    for (i = 1; i < n; i++)
        if (small > a[i])     // GREATER THAN USED
            small = a[i];     // update smallest

    printf("Smallest = %d", small);

    return 0;
}

