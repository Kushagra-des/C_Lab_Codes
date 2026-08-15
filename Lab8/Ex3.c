#include <stdio.h>
#define MAX 10
int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int M1[MAX][MAX], M2[MAX][MAX] = {0};
    printf("Enter elements of matrix M1 (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &M1[i][j]); }}
    for (int i = 0; i < n; i++) {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += M1[i][j];
            colSum += M1[j][i]; }
        M2[i][i] = rowSum;
        M2[i][n - 1 - i] = colSum;
    }
    printf("\n Matrix M2 (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", M2[i][j]); }
        printf("\n");}
    return 0;
    }
