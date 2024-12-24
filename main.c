#include <stdio.h>

int main() {
    int numSubjects;
    float grade, total = 0, average;

    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);

    if (numSubjects <= 0) {
        printf("Invalid number of subjects. Exiting program.\n");
        return 1;
    }

    for (int i = 1; i <= numSubjects; i++) {
        printf("Enter the grade for subject %d: ", i);
        scanf("%f", &grade);

        if (grade < 0 || grade > 100) {
            printf("Invalid grade. Please enter a value between 0 and 100.\n");
            i--;
            continue;
        }

        total += grade;
    }

    average = total / numSubjects;

    printf("\nTotal Grades: %.2f\n", total);
    printf("Average Grade: %.2f\n", average);

    if (average >= 90) {
        printf("Performance: Excellent\n");
    } else if (average >= 80) {
        printf("Performance: Very Good\n");
    } else if (average >= 70) {
        printf("Performance: Good\n");
    } else if (average >= 60) {
        printf("Performance: Pass\n");
    } else {
        printf("Performance: Fail\n");
    }

    return 0;
}
