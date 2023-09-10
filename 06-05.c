#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char txt[301], stack[301];
    char find;
    int i=0, j=0, k=1, count=0, pointer=1;

    scanf("%[^\n]", txt);
    scanf("%s", &find);

    find = tolower(find);

    while(i<strlen(txt)){
        txt[i] = tolower(txt[i]);
        i++;
    }
    
    while(j<strlen(txt)){
        if(txt[j]==find){
            count++;
            stack[pointer] = j+1;
            pointer++;
        }
        j++;
    }

    if(count==0){
        printf("Not found.");
    }
    else{
        printf("There is/are %d \"%c\" in the above sentences.\nPosition: ", count, find);
        int m = pointer-1;
        int ind;
        while(k<pointer){
            printf("%d", stack[k]);
            k++;
            m--;
            if(m!=0){
                printf(", ");
            }
        }

    }

    return 0;
}
