#include <stdio.h>
int main(){
    char no1, no2, no3, no4, no5;
    scanf("%c %c %c %c %c", &no1, &no2, &no3, &no4, &no5);
    int num1 = (int)no1+1, num3 = (int)no3+1, num5 = (int)no5+1;
    printf("%c\n%c\n%c\n%c\n%c\n", num1, no2, num3, no4, num5);
    return 0;
}
