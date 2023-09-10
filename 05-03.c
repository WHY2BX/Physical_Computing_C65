#include <stdio.h>

int main(){
    int m, n, i;
    scanf("%d %d", &m, &n);
    if(m>n){
        i=m;
        while(i>=n){
            printf("%d ", i);
            i--;
        }
    }
    else{
        i=m;
        while(i<=n){
            printf("%d ", i);
            i++;
        }
    }

    return 0;
}
