#include <stdio.h>

int main() {
    int a[20], n, i, val, found = 0;

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

    printf("\nEnter the element to be searched: ");
    scanf("%d", &val);

    for (i = 0; i < n; i++) {
        if (a[i] == val) {
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", val);
    } else {
        printf("Element %d found in the array at position %d.\n", val, i + 1);
    }

    return 0;
}
