#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n], even[n], odd[n];
    int evenCount = 0, oddCount = 0;
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];}
    }
    printf("\nEven numbers: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]); }
    printf("\nOdd numbers: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]); }
    return 0;
    }
