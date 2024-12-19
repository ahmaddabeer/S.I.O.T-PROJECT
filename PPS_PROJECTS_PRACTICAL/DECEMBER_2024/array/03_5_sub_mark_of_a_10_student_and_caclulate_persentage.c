#include <stdio.h>

int main() {
    char name[10][30]; // Array to store names of 10 students
    int marks[10][5];  // Array to store marks of 5 subjects for 10 students
    int total, i, j;
    float percentage;

    // Loop to input data for 10 students
    for (i = 0; i < 10; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf(" %[^\n]", name[i]); // Read name with spaces

        printf("Enter marks for 5 subjects: ");
        total = 0; // Reset total for each student

        for (j = 0; j < 5; j++) {
            scanf("%d", &marks[i][j]);
            total += marks[i][j];
        }

        // Calculate percentage
        percentage = (float)total / 5;

        // Display results
        printf("\nStudent Name: %s\n", name[i]);
        printf("Total Marks: %d\n", total);
        printf("Percentage: %.2f%%\n", percentage);

        // Determine grade
        if (percentage >= 60) {
            printf("Grade: A\n");
        } else if (percentage >= 40) {
            printf("Grade: B\n");
        } else {
            printf("Grade: C\n");
        }

        printf("--------------------------------------\n");
    }

    return 0;
}
