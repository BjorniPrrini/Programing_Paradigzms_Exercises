#include <stdio.h>
#include <math.h>

int main(){
    double num1;
    double num2;
    int power;
    int root;

    printf("Enter number 1: ");
    scanf("%lf", &num1);
    printf("Enter number 2: ");
    scanf("%lf", &num2);
    printf("Enter power: ");
    scanf("%d", &power);
    printf("Enter root: ");
    scanf("%d", &root);

    printf("Addition: %lf\n", num1+num2);
    printf("Subtraction: %lf\n", num1-num2);
    printf("Multiplication: %lf\n", num1*num2);
    printf("Division: %lf\n", num1/num2);
    printf("Sum in power %d: %lf\n", power, pow((num1+num2), power));
    printf("Root in %d: %lf\n", root, pow((num1*num2), 1.0/root));

    return 0;
}