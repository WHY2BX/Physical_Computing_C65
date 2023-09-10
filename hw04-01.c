#include <stdio.h>
#include <math.h>

int main(){
    float price, dis;
    int val;
    scanf("%f %f %d", &price, &dis, &val);

    float disprice = (price*((100-dis)/100))*val;
    float valforfree = ((val - floor(val/3)) + val%3)*price;

    if(valforfree > disprice){
        printf("Discount %.00f%%\n", dis);
        printf("%.02f", disprice);
    }
    else{
        printf("Buy 2 Get 1\n");
        printf("%.2f", valforfree);
    }
    return 0;
}
