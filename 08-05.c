#include <stdio.h>
#include <string.h>

struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
    };

void playing_decision(struct Weather);

int main(){

    int round;
    scanf("%d", &round);

    for(int i = 0; i<round; i++){

        struct Weather weater;
        scanf("%s", weater.outlook);
        scanf(" %d", &weater.temperature);
        scanf(" %d", &weater.humidity);
        scanf(" %c", &weater.wind);

        playing_decision(weater);
    }
    
    return 0;
}

void playing_decision(struct Weather weater){

    if(strcmp(weater.outlook, "overcast")==0){
        printf("yes\n");
    }
    else if(strcmp(weater.outlook, "rain")==0){
        if(weater.wind =='F'){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    else if(strcmp(weater.outlook, "sunny")==0){
        if(weater.humidity>77.5){
            printf("no\n");
        }
        else{
            printf("yes\n");
        }
    }
    else{
        printf("no");
    }
}
