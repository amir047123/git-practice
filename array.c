#include <stdio.h>

int main() {

    int arr[] = {1, 2, 3, 4, 5,6,7};

    int sum = 0;

    printf("Array elements: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }

    printf("\nSum of array elements = %d\n", sum);
    return 0;
}
