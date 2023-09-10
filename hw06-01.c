#include<stdio.h>
#include<string.h>
 
int main(){
 
    char txt[200];
 
    scanf("%[^\n]", txt);
 
 
    char upper[26] = {'A', 'B', 'X', 'Y', 'P', 'Q', 'R', 'M', 'N', 'C', 'E', 'D', 'K', 'L', 'J', 'O', 'S', 'H', 'T', 'U', 'F', 'V', 'Z', 'G', 'W', 'I'};
    char lower[26] = {'a', 'b', 'x', 'y', 'p', 'q', 'r', 'm', 'n', 'c', 'e', 'd', 'k', 'l', 'j', 'o', 's', 'h', 't', 'u', 'f', 'v', 'z', 'g', 'w', 'i'};

 
    int i = 0;
    int j = 0;
 
    while(j < strlen(txt)){
        
        while(i<=25){

            if((txt[j] == 'V' || txt[j] == 'Z' || txt[j] == 'G' || txt[j] == 'W'|| txt[j] == 'I')&&(txt[j] == upper[i])){
                txt[j] = upper[i-26+5];
                break;
            }
            else if (txt[j] == upper[i]){
                txt[j] = upper[i+5];
                break;
            }
            if((txt[j] == 'v' || txt[j] == 'z' || txt[j] == 'g' || txt[j] == 'w'|| txt[j] == 'i')&&(txt[j] == lower[i])){
                txt[j] = lower[i-26+5];
                break;
            }
            else if (txt[j] == lower[i]){
                txt[j] = lower[i+5];
                break;
            }
 
            i++;
        }
        j++;
        i = 0;
    }
     
 
 
 
    int  count = 0;
 
    while(count < strlen(txt)){
        printf("%c", txt[count]);
        count++;
    }
 
 
    return 0;
}
