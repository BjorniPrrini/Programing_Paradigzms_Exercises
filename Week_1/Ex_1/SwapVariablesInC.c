#include <stdio.h>

int main(){
    int a;
    int b;

    printf("Enter number a: ");
    scanf("%d", &a);

    printf("Enter number b: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a: %d\n", a);
    printf("b: %d", b);

    return 0;
}