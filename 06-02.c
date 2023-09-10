#include <stdio.h>

int main(){
    double mat[3][3], mat2[3][3];
    int rows, col;
    for(rows=0; rows<3; rows++){
        for(col=0; col<3; col++){
            scanf("%lf", &mat[rows][col]);
        }
    }
    for(rows=0; rows<3; rows++){
        for(col=0; col<3; col++){
            scanf("%lf", &mat2[rows][col]);
        }
    }

    printf("A x B\n");
    double sum = 0;
    for(rows=0; rows<3; rows++){
        sum =0;
        for(col=0; col<3; col++){
            sum += mat[rows][col]*mat2[col][rows];
        }
        printf("%lf ", sum);
        printf("\n");
    }

    return 0;
}
