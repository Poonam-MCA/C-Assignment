#include <stdio.h>

int main() {
    int n, i;
    float mathMarks[100], englishMarks[100], totalMarks[100];

    printf("Program for stores the marks of the students\n ");
    printf("Name-Poonam, Class-MCA1A, Roll no-34\n"); 
    printf("Enter the number of students: ");
    scanf("%d", &n);

    
    if (n <= 0 || n > 100) {
        printf("Invalid number of students. Please enter a value between 1 and 100.");
        return 1;
    }

    
    for (i = 0; i < n; i++) {
        printf("Enter marks for Student %d:\n", i + 1);
        printf("Mathematics: ");
        scanf("%f", &mathMarks[i]);
        printf("English: ");
        scanf("%f", &englishMarks[i]);

       
        totalMarks[i] = mathMarks[i] + englishMarks[i];
    }

    
    printf("\nStudent\tMathematics\tEnglish\tTotal Marks\n");
    for (i = 0; i < n; i++) {
        printf("%d\t\t%.2f\t\t%.2f\t\t%.2f\n", i + 1, mathMarks[i], englishMarks[i], totalMarks[i]);
    }

    return 0;
}

