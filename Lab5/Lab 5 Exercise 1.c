#include <stdio.h>
int main() {
    int n, factorial = 1;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        goto negative_case;
    }
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("Factorial of %d is %d\n", n, factorial);
    goto end;

negative_case:
    printf("Factorial is not defined for negative numbers.\n");

end:
    return 0;
}
