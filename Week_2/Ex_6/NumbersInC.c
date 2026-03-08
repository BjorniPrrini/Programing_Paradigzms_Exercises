#include <stdio.h>

int main(){
    int number_to_end;
    int pos_number = 0;
    int neg_number = 0;
    int sum_numbers = 0;
    int count = 0;
    int num;

    printf("Enter number to end: ");
    scanf("%d", &number_to_end);

    while(1){
        printf("Enter number: ");
        scanf("%d", &num);

        if(num == number_to_end){
            break;
        }

        if(num >= 0){
            pos_number++;
        }else{
            neg_number++;
        }

        sum_numbers += num;
        count++;
    }

    printf("Positive numbers: %d\n", pos_number);
    printf("Negative numbers: %d\n", neg_number);
    printf("Sum numbers: %d\n", sum_numbers);
    printf("Avg numbers: %.2f\n", (float)sum_numbers / (float)count);

    return 0;
}