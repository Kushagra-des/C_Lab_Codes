#include <stdio.h>

void addArrays(int (*arr1)[3], int (*arr2)[3], int (*result)[3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(result + i * cols + j) = *(arr1 + i * cols + j) + *(arr2 + i * cols + j); } } }
void printArrayAndAddresses(int (*arr)[3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        printf("Address of row %d: %p\n", i, (arr + i));
        for (int j = 0; j < cols; j++) {
            printf("Address of arr[%d][%d]: %p, Value: %d\n", i, j, (arr + i) + j, *(*(arr + i) + j)); } } }
int main() {
    int rows = 2, cols = 3;
    int arr1[2][3], arr2[2][3], result[2][3];
    printf("Enter elements for the first 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("arr1[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]); } }
    printf("\nEnter elements for the second 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("arr2[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]); } }
  addArrays(arr1, arr2, result, rows, cols);
    printf("\nElements and addresses for arr1:\n");
    printArrayAndAddresses(arr1, rows, cols);
    printf("\nElements and addresses for arr2:\n");
    printArrayAndAddresses(arr2, rows, cols);
    printf("\nElements and addresses for result (sum of arr1 and arr2):\n");
    printArrayAndAddresses(result, rows, cols);
    printf("\nSum of arrays (result):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("result[%d][%d] = %d\n", i, j, result[i][j]); } }
    return 0; }
