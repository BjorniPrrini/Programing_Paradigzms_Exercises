#include <stdio.h>

int main(){
    int amount, extra;
    double price;

    printf("Enter amount: ");
    scanf("%d", &amount);

    if(amount <= 4000){
        price = 10;
    }else{
        extra = amount - 4000;
        price = 10 + 0.005 * extra;
    }

    printf("Bill: %lf", price);

    return 0;
}