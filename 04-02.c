#include <stdio.h>
int main(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(((a>b) && (b>c)) || ((c>b) && +(b>a))){
        printf("%.2lf", b);
    }
    else if(((b>a) && (a>c)) || ((c>a)&&(a>b))){
        printf("%.2lf", a);
    }
    else if(((a>c) && (c>b)) || ((b>c)&&(c>a))){
        printf("%.2lf", c);
    }
    
    return 0;
}
