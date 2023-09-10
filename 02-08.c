#include <stdio.h>
int main(){
    char fname1[99], sname1[99], person2[99], person3[99];
    scanf("%s %s %[^\n] %[^\n]", fname1, sname1, person2, person3);
    printf("Person 1: %s %s\n",fname1, sname1);
    printf("Person 2: %s\n", person2);
    printf("Person 3: %s", person3);
    
    return 0;
}
