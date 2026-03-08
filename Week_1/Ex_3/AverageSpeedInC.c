#include <stdio.h>

int main(){
    int mile, h, m ,s;

    printf("Enter miles: ");
    scanf("%d", &mile);
    printf("Enter hours: ");
    scanf("%d", &h);
    printf("Enter minutes: ");
    scanf("%d", &m);
    printf("Enter seconds: ");
    scanf("%d", &s);

    double time = h + m / 60 + s / 3600;
    double km = mile * 1.6;

    printf("AVG Speed: %lf", time / km);

    return 0;
}