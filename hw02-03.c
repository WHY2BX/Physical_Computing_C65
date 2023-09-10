#include <stdio.h>
int main(){
    char txt[5];

    scanf("%s", txt);

    printf("%-81.1s", txt);
    printf("%-81.2s", txt);
    printf("%-81.3s", txt);
    printf("%-81.4s" , txt);
    printf("%-81.5s", txt);
    
    return 0;
}
