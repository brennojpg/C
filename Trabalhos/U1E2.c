#include <stdio.h>

int main(){

    int a, b, result, resto;
    scanf("%d", &a);
    scanf("%d", &b);

    if (b == 0){
        printf("Erro: divisor igual a zero.\n");
        }
        
    else{
        result = a/b;
        resto = a%b;

        printf("%d\n", result);
        printf("%d\n", resto);
    }

    return 0;

}