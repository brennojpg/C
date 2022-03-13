#include <stdio.h>

int main(){

    float mat[3][3], soma3 = 0;
    int i, j, soma1 = 0, soma2 = 0;

    for (i = 0; i < 3; i = i + 1){
        for (j = 0; j < 3; j = j + 1){
            scanf("%f\n", &mat[i][j]);

        }
    }
    
    //
    soma1 = (mat[0][0] * mat[1][1] * mat[2][2]) + (mat[0][1] * mat[1][2] * mat[2][0]) + (mat[0][2] * mat[1][0] * mat[2][1]);
    soma2 = (mat[0][1] * mat[1][0] * mat[2][2]) + (mat[0][0] * mat[1][2] * mat[2][1]) + (mat[0][2] * mat[1][1] * mat[2][0]);
    soma3 = soma1 - soma2;

    printf("%f\n", soma3);

return 0;
}
