#include <stdio.h>
#include <string.h>
char calculateGrade(float avg) {
    if (avg >= 80) return 'O';
    else if (avg >= 72) return 'A';
    else if (avg >= 64) return 'B';
    else if (avg >= 56) return 'C';
    else if (avg >= 48) return 'D';
    else if (avg >= 40) return 'E';
    else if (avg >= 35) return 'P';
    else return 'F'; }
void displayGrades(int n, char names[][50], int enrolls[], int marks[][3]) {
    printf("Name\tEnroll No\tSub1\tSub2\tSub3\tAverage Marks\tGrade\n");
    for (int i = 0; i < n; i++) {
        float avg = (marks[i][0] + marks[i][1] + marks[i][2]) / 3.0;
        char grade = calculateGrade(avg);
        printf("%s\t%d\t\t%d\t%d\t%d\t%.2f\t\t%c\n", names[i], enrolls[i], marks[i][0], marks[i][1], marks[i][2], avg, grade); } }
int main() {
    int n;
    char names[100][50];
    int enrolls[100];
    int marks[100][3];
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter enrollment number: ");
        scanf("%d", &enrolls[i]);
        printf("Enter marks for 3 subjects: ");
        for (int j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]); } }
    displayGrades(n, names, enrolls, marks);
return 0;
}
