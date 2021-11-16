#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    int num_people;
    char diff[1000];
    char letter;

    scanf("%d", &num_people);getchar();

    //Initializing State input
    for(int i = 0; i < 1000;i++)diff[i] = '\0';

    for(int i = 0; (letter = getchar()) != '\n';i++)
    {
       diff[i] = letter;
    }

    for(int j = 0; j < strlen(diff);j++){

        if(diff[j] == '1'){
            printf("HARD");
            flag = 1;
            break;
        }
        
        if((j == (strlen(diff)-1)) && (diff[j] == '0')){
        
            printf("EASY");
        }
    }

    return 0;
}
