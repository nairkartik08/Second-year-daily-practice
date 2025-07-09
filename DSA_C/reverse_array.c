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

    printf("\nThe reversed array:\n");
    for (i =(n-1); i>=0; i--) {
            printf("%d  ", a[i]);
    }
    return 0;
}
