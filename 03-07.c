#include <stdio.h>
int main(){
    float price, dis, val;
    scanf("%f %f %f", &price, &dis, &val);
    printf("%.2f", ((price*((100-dis)/100))*val));

    return 0;
}
