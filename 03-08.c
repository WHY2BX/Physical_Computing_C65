#include <stdio.h>
int main(){
    int inp;
    scanf("%d", &inp);
    int day = inp/86400;
    int hour = (inp/3600)-(day*24);
    int min = (inp/60)-(hour*60)-(day*1440);
    int sec = inp%60;
    printf("%d s = %d d %d h %d m %d s", inp, day, hour, min, sec);

    return 0;
}
