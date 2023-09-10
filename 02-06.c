#include <stdio.h>
int main(){
    char txt[30], txt2[30], txt3[30], txt4[30];
    scanf("%s", txt);
    scanf("%s", txt2);
    scanf("%s", txt3);
    scanf("%s", txt4);
    printf("String 1: %.3s\nString 2: %.4s\nString 3: %.5s\nString 4: %.6s", txt, txt2, txt3, txt4);
    return 0;
}
