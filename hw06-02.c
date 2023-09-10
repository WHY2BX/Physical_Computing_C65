#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(){

    int n;

    scanf("%d", &n);

    char list[n];
    char stack[200];

    int i;
    int StackSize = 0; 
    int check = 0; 
    char c;

    //input
    for (i = 1; i<=n; i++){
        scanf(" %c", &c);
        if(isupper(c)){
            int change = (int)c+32;
            list[i-1] = (char)change;
        }
        else{
            list[i-1] = c;
        }
        
    }

    int cc = 0;
    int j = 0;
    
    //check
    while (cc < n){
        while(j < StackSize){
            if(stack[j] == list[cc]){           
                check = 1;
            }
            j = j+1;
        }

        if (check == 0){
            stack[StackSize] = list[cc];       
            StackSize++;
        }

        j = 0;
        check = 0;
        cc++;
    }
    int count[StackSize];

    cc = 0;
    j = 0;

    //output
    while(cc < StackSize){
        count[cc] = 0;
        while(j < n){
            if(stack[cc] == list[j]){
                count[cc] = count[cc]+1;
            }
            j++;
        }
        
        j = 0;
        cc++;
    }

    int k = 0;
    while(k < StackSize){
        printf("%c: %d\n", stack[k], count[k]);
        k++;
    }

    return 0;
}

