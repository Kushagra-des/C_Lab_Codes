#include<stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int s, t;

    printf("Enter the First number: ");
    scanf("%d", &s);

    printf("Enter the Second number: ");
    scanf("%d", &t);

    printf("\nBefore Swapping: s = %d, t = %d\n", s, t);
    swap(&s, &t);

    printf("After Swapping: s = %d, t = %d\n", s, t);
    return 0;
}
