#include <stdio.h>

int main() {
    int points;

    printf("Enter points: ");
    scanf("%d", &points);

    if(points >= 0 && points <= 49){
        printf("You got 0, FF\n");
    }else if (points >= 50 && points <= 59){
        printf("You got 0.5, FD\n");
    }else if (points >= 60 && points <= 64){
        printf("You got 1, DD\n");
    }else if (points >= 65 && points <= 69){
        printf("You got 1.5, DC\n");
    }else if (points >= 70 && points <= 74){
        printf("You got 2, CC\n");
    }else if (points >= 75 && points <= 79){
        printf("You got 2.5, CB\n");
    }else if (points >= 80 && points <= 84){
        printf("You got 3, BB\n");
    }else if (points >= 85 && points <= 89){
        printf("You got 3.5, BA\n");
    }else if (points >= 90 && points <= 100){
        printf("You got 4, AA\n");
    }

    return 0;
}