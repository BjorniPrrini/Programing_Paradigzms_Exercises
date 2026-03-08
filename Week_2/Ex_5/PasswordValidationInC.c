#include <stdio.h>
#include <string.h>

int main(){
    char password[21];
    int has_upper = 0;
    int has_number = 0;
    int has_special = 0;

    int upper_count = 0;
    int number_count = 0;
    int char_count = 0;

    printf("Enter password: ");
    scanf("%20s", password);

    int len = strlen(password);

    if(len < 8 || len > 20){
        printf("Invalid password\n");
    }else{
        for(int i = 0; i < len; i++){
            char c = password[i];

            if(c >= 'A' && c <= 'Z'){
                has_upper = 1;
                upper_count++;
            }

            if(c >= '0' && c <= '9'){
                has_number = 1;
                number_count++;
            }

            if(c == '#' || c == '$' || c == '%' || c == '@' || c == '*'){
                has_special = 1;
                char_count++;
            }
        }

        if(has_upper && has_number && has_special){
            printf("Valid password\n");
        }else{
            printf("Invalid password\n");
        }

        printf("UpperCharacter counter: %d\n", upper_count);
        printf("Digits counter: %d\n", number_count);
        printf("Characters counter: %d\n", char_count);
    }

    return 0;
}