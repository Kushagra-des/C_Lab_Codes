#include <stdio.h>

void sortArrayDescending(int *arr, int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) < *(arr + j)) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp; } } } }

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]); }
    sortArrayDescending(arr, n);
    printf("Sorted array in descending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i)); }
    printf("\n");
    return 0; }
