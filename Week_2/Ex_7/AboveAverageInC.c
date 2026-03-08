#include <stdio.h>

int main(){
    int certain_grade;
    int num_grades;
    int count = 0;
    int sum_grades = 0;

    printf("Enter a certain grade: ");
    scanf("%d", &certain_grade);

    printf("Enter number of grades: ");
    scanf("%d", &num_grades);

    for(int i = 0; i < num_grades; i++){
        int grade;

        printf("Enter grade: ");
        scanf("%d", &grade);

        if(grade > certain_grade){
            count++;
            sum_grades += grade;
        }
    }

    printf("Grades greater than input: %d\n", count);
    printf("Sum of grades greater than input: %d\n", sum_grades);

    return 0;
}