#include <stdio.h>
#include <math.h>

void perimeter();
void area();
int main(){
    double a, b;
    scanf("%lf %lf", &a, &b);

    perimeter(a, b);
    area(a, b);

    return 0;
}

void perimeter(double a, double b){
    double c = sqrt(pow(a, 2)+pow(b, 2));
    printf("Perimeter: %.2lf\n", a+b+c);
}

void area(double a, double b){
    double ans = (0.5)*b*a;
    printf("Area: %.2lf", ans);
}
