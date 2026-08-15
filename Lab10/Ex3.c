#include <stdio.h>

void mergeArrays(int *arr1, int *arr2, int *arr3, int size1, int size2) {
    int i = 0, j = 0, k = 0;
    for (i = 0; i < size1; i++) {
        *(arr3 + k) = *(arr1 + i);
        k++; }
    for (j = 0; j < size2; j++) {
        *(arr3 + k) = *(arr2 + j);
        k++; } }

int main() {
    int size1, size2;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < size1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]); }
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < size2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]); }
    int arr3[size1 + size2];
    mergeArrays(arr1, arr2, arr3, size1, size2);
    printf("Merged array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", *(arr3 + i)); }
    printf("\n");
    return 0; }
