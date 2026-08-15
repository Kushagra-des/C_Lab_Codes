#include <stdio.h>
#include <math.h>
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i; }
    return fact; }
double sinSeries(double x, int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        int exponent = 2 * i + 1;
        double term = pow(x, exponent) / factorial(exponent);
        if (i % 2 == 0) {
            sum += term;
        } else {
            sum -= term; } }
    return sum; }
int main() {
    double x;
    int n;
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    double result = sinSeries(x, n);
    printf("Sin(%lf) calculated using %d terms = %lf\n", x, n, result);
    return 0;
    }
