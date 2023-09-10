#include <stdio.h>
#include <string.h>

struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
};

int main(){

    int val;
    scanf("%d", &val);
    struct Record emp[val];

    for(int i = 0; i<val; i++){
        scanf("%s", &emp[i].id);
        scanf("%s", &emp[i].name);
        scanf("%ld", &emp[i].salary);
        scanf("%ld", &emp[i].sales);
    }

    char search[10], check;
    scanf("%s", search);
    for(int j = 0; j<val; j++){
        if(strcmp(emp[j].id, search)==0){
            printf("%s\n", emp[j].id);
            printf("%s\n", emp[j].name);
            printf("%.2ld\n", emp[j].sales);
            double coms = (emp[j].sales)*(0.02);
            printf("%.2f\n", coms);
            printf("%.2ld\n", emp[j].salary);
            printf("%.2f", emp[j].salary+coms);
            check = 't';
        }
    }
    
    if(check!='t'){
        printf("ID not found !!!");
    }

    return 0;

}
