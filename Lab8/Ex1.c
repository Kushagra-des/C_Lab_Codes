#include <stdio.h>
int main() {
    int n, search_num, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n], revised_arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        revised_arr[i] = arr[i]; }
    printf("Enter the number to search and replace: ");
    scanf("%d", &search_num);
    for (int i = 0; i < n; i++) {
        if (arr[i] == search_num) {
            found = 1;
            if (i == 0) {
                revised_arr[i] = arr[i + 1];
            } else if (i == n - 1) {
                revised_arr[i] = arr[i - 1];
            } else {
                revised_arr[i] = (arr[i - 1] + arr[i + 1]) / 2; }}}
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);}
    printf("\n");
    if (found) {
        printf("Revised array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", revised_arr[i]); }
        printf("\n");
    } else {
        printf("Number not found in the array.\n"); }
    return 0; }
