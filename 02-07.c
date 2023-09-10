#include <stdio.h>
int main(){
    char fname[30];
    char lname[30];
    int idx;
    int date;
    int month; 
    int year;
    float gpa;
    scanf("%s %s", fname, lname);
    scanf("%d", &idx);
    scanf("%d/%d/%d", &date, &month, &year);
    scanf("%f", &gpa);

    printf("Fullname: %s %s\n", fname, lname);
    printf("ID: %d\n", idx);
    printf("DOB: %02d-%02d-%02d\n", date, month, year);
    printf("GPA: %.2f", gpa);

    return 0;
}
