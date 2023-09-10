#include <stdio.h>

int main(){
    int lv, i, j, k;
    scanf("%d", &lv);
    int blank = lv;
    for(i=1; i<=lv; i++){
        for(k=1; k<=(lv-i); k++){
            printf(" "); 
        }
        
        for(j=1; j<=(i+(i-1)); j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
