#include <stdio.h>
#include <math.h>
int main() {
    int angle_deg;
    float angle_rad, v, maxHeight, maxRange, time;
    printf("Enter initial velocity (m/s): ");
    scanf("%f", &v);
    printf("Enter angle (degree): ");
    scanf("%d", &angle_deg);
    printf("\nAngle (deg)\tMaximum Height (m)\tMaximum Range (m)\tTime of Flight (s)\n");
    for (angle_deg; angle_deg <= 90; angle_deg += 5) {
        angle_rad = angle_deg * 3.14 / 180;
        maxHeight = (v * v * sin(angle_rad) * sin(angle_rad)) / (2 * 9.8);
        maxRange = (v * v * sin(2 * angle_rad)) / 9.8;
        time = (2 * v * sin(angle_rad)) / 9.8;
        printf("%d\t\t%.2f\t\t\t%.2f\t\t\t%.2f\n", angle_deg, maxHeight, maxRange, time);
    }
 printf("\nThe program demonstrates that the maximum range is achieved at approximately 45 degrees.\n");
return 0;
}
