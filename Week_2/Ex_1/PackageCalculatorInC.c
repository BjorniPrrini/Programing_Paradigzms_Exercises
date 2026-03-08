#include <stdio.h>

int main(){
    int p1w, p1p, p2w, p2p;

    printf("Enter weight for package 1:");
    scanf("%d", &p1w);
    printf("Enter price for package 1:");
    scanf("%d", &p1p);
    printf("Enter weight for package 2:");
    scanf("%d", &p2w);
    printf("Enter price for package 2:");
    scanf("%d", &p2p);

    if((p1w / p1p) > (p2w / p2p)){
        printf("Package 1 is better.");
    }else{
        printf("Package 2 is better.");
    }

    return 0;
}