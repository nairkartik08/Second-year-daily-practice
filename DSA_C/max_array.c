#include <stdio.h>

int main() {
    int a[20], n, i, max;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("The array:\n");
    for (i = 0; i < n; i++) {
        printf("%d  ", a[i]);
    }

    max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }

    printf("\nLargest number = %d\n", max);

    return 0;
}
