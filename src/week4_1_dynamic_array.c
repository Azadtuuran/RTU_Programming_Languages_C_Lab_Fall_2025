/*
 * week4_1_dynamic_array.c
 * Author: [Your Name]
 * Student ID: [Your ID]
 * Description:
 *   Demonstrates creation and usage of a dynamic array using malloc.
 *   Students should allocate memory for an integer array, fill it with data,
 *   compute sum and average, and then free the memory.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int *arr = NULL;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    // Allocate memory for n integers using malloc
    arr = (int *)malloc(n * sizeof(int));

    // Check if allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Compute sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Compute average
    float avg = (float)sum / n;

    // Print results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    // Free allocated memory
    free(arr);

    return 0;
}
