#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    int num_people, flag = 0;
    char diff[1000];
    char letter;

    scanf("%d", &num_people);getchar();

    //Initializing State input
    for(int i = 0; i < 1000;i++)diff[i] = '\n';

    for(int i = 0; (letter = getchar()) != '\n';i++)
    {
       diff[i] = letter;
    }

    for(size_t j = 0; j < strlen(diff);j++){

        if(diff[j] == '1'){
            printf("HARD");
            flag = 1;
            break;
        }
    }

    if(flag == 0)printf("EASY");
    return 0;
}
