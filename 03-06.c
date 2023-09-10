#include <stdio.h>
#include <math.h>

int main(){
    float price, m, h;
    scanf("%f %f %f", &price, &m, &h);
    float v = (h*3.14159265359)*(pow((m/2), 2));
    printf("Volume : %.2fml\nBaht/ml : %.4f", v, (price/v));

    return 0;
}
