#include <stdio.h>
#include <string.h>

int main(){
    char txt[201];
    int count = 0;
    int i=0, k=0;
    
    scanf("%s", txt);

    while(i < strlen(txt)){
        while(k < strlen(txt)){
            if(txt[i] > txt[k]){
                char txt2 = txt[i];
                txt[i] = txt[k];
                txt[k] = txt2;
            }
            k++;
        }
        i++;
        k=i;
    }

    for(int j = 0; j<strlen(txt); j++){
        printf("%c", txt[j]);
    }

    return 0;

}
