#include <stdio.h>

int main() {
    int s1, s2, s3, s4, s5;
    float avg, total;

    printf("Enter marks of subject 1: ");
    scanf("%d", &s1);
    printf("Enter marks of subject 2: ");
    scanf("%d", &s2);
    printf("Enter marks of subject 3: ");
    scanf("%d", &s3);
    printf("Enter marks of subject 4: ");
    scanf("%d", &s4);
    printf("Enter marks of subject 5: ");
    scanf("%d", &s5);

    total = s1 + s2 + s3 + s4 + s5;
    avg = total / 5;

    if (s1 < 40 || s2 < 40 || s3 < 40 || s4 < 40 || s5 < 40) {
        printf("Fail!");
    } else {
        printf("Average of marks is: %.2f \n", avg);
        if (avg >= 75) {
            printf("Grade:Distinction");
        } else if (avg >= 60) {
            printf("Grade:First Class");
        } else if (avg >= 50) {
            printf("Grade:Second Class");
        } else {
            printf("Grade:Third Class");
        }
    }

    return 0;
}
//This code is the solution of the experiment no. 2 taught in my college for C programming subject.