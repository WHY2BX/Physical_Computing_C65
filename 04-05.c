#include <stdio.h>
int main(){
    char txt;
    scanf("%c", &txt);
    int asc = (int)txt;
    if((asc>=65)&&(asc<=90)){
        asc += 32;
        printf("%c", asc);
    }
    else if((asc>=97)&&(asc<=122)){
        asc -= 32;
        printf("%c", asc);
    }
    else{
        printf("error");
    }

    return 0;
}
