#include <stdio.h>

int main(){
    double mat[3][3];
    int rows, col, i;
    for(rows=0; rows<3; rows++){
        for(col=0; col<3; col++){
            scanf("%lf", &mat[rows][col]);
        }
    }
    if(((mat[0][1]==0)&&(mat[0][2]==0))&&((mat[2][0]==0)&&(mat[1][2]==0))&&((mat[1][0]==0)&&(mat[2][1]==0)))
    {
        if((mat[1][1]==mat[2][2])&&(mat[2][2]==mat[0][0]))
        {
            printf("This is a scalar matrix");
        }
    }
    else{
        printf("This is not a scalar matrix");
    }

    return 0;
}
