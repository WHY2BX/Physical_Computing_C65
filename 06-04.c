#include <stdio.h>
#include <string.h>

int main(){
    char txt[101], rev[101];
    scanf("%[^\n]", txt);
    int begin, end, count=0, i;

    while(txt[count]!= '\0'){
        count++;
    }
    //count = strlen(txt) - 1;

    end = count-1;
    for(begin=0; begin<count; begin++){
        rev[begin] = txt[end];
        end--;
    }
    rev[begin] = '\0';

    // for(i=0; i<count; i++){
    //     printf("%s", rev[i]); 
    // }

    printf("%s", rev[i]);

    return 0;
}
