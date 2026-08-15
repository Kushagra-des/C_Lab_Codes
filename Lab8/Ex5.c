#include <stdio.h>
void mergeArrays(int arr1[], int arr2[], int merged[], int n1, int n2) {
    for (int i = 0; i < n1; i++) merged[i] = arr1[i];
    for (int i = 0; i < n2; i++) merged[n1 + i] = arr2[i]; }
void sortArray(int arr[], int size, int ascending) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((ascending && arr[i] > arr[j]) || (!ascending && arr[i] < arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; } } } }
int main() {
    int n1, n2, choice;
    printf("Size of first array: "); scanf("%d", &n1);
    int arr1[n1]; printf("Elements of first array:\n");
    for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);
    printf("Size of second array: "); scanf("%d", &n2);
    int arr2[n2]; printf("Elements of second array:\n");
    for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);
    int merged[n1 + n2];
    mergeArrays(arr1, arr2, merged, n1, n2);
    printf("Enter '1' for ascending or '2' for descending order: ");
    scanf("%d", &choice);
    sortArray(merged, n1 + n2, choice == 1);
    printf("Sorted merged array:\n");
    for (int i = 0; i < n1 + n2; i++) printf("%d ", merged[i]);
    printf("\n");
    return 0; }
