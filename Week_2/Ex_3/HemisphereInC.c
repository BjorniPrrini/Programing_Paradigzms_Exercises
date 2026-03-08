#include <stdio.h>

int main() {
    char name[100];
    int latitude;
    int earthIsFlat = 1;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter latitude: ");
    scanf("%d", &latitude);

    if(earthIsFlat){
        printf("Be careful not to fall off.\n");
    }

    if(latitude > 90 || latitude < -90){
        printf("Incorrect latitude.\n");
    }else if (latitude >= 0 && latitude <= 90){
        printf("%s lives in Northern hemisphere\n", name);
    }else if (latitude >= -90 && latitude <= 0){
        printf("%s lives in Southern hemisphere\n", name);
    }
    
    return 0;
}