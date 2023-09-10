#include <stdio.h>
int main(){
    float score;
    scanf("%f", &score);
    if((score >=0) && (score <=100)){
        if((score>=80)&&(score<=100)){
                printf("A");
            }
            else if(score >=70){
                printf("B");
            }
            else if(score >=60){
                printf("C");
            }
            else if(score >=50){
                printf("D");
            }
            else{
                printf("F");
            }
    }
    else{
        printf("Out of Range");
    }
    
    return 0;
}
