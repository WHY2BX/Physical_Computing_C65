#include <stdio.h>

int main(){
    char M[8]={2, 20, 8, 10, 4, 6, 16, 18};
    char N[7]={1, 3, 9, 7, 11, 15, 19};
    int inp, i, check;

    scanf("%d", &inp);
    while((inp<1) || (inp>20)){
        scanf("%d", &inp);
    }

    for(i=0; i<=sizeof(M); i++){
        if(M[i]==inp){
            check = 1;
            printf("%d is in M at index [%d]", inp, i);
        }
    }

    for(i=0; i<=sizeof(N); i++){
        if(N[i]==inp){
            check = 1;
            printf("%d is in N at index [%d]", inp, i);
        }
    }

    if(check!=1){
        printf("%d is not in neither M nor N", inp);
    }

    return 0;
}
