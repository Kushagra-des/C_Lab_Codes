#include <stdio.h>
int main()
{
int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);
    if (marks >= 80) {
        printf("Grade: O (Outstanding)\n");
    } else if (marks >= 72) {
        printf("Grade: A+ (Excellent)\n");
    } else if (marks >= 64) {
        printf("Grade: A (Very Good)\n");
    } else if (marks >= 56) {
        printf("Grade: B+ (Good)\n");
    } else if (marks >= 48) {
        printf("Grade: B (Average)\n");
    } else if (marks >= 40) {
        printf("Grade: C (Below Average)\n");
    } else if (marks >= 35) {
        printf("Grade: P (Pass)\n");
    } else {
        printf("Grade: F (Fail)\n");
    }
    return 0;
}
