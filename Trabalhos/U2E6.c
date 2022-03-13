#include <stdio.h>


int main(){

    float num, soma = 0, aux = 0;
    int real[50], i=0;

    scanf("%f", &num);
    printf("0.");

    for (i = 0; i < 10; i++){

        if (num > 0 && num < 1){
            soma = num * 2;
            real[i] = soma;  
            num = soma - real[i];
        }
        
        printf("%d", real[i]);
        
        if (num == 0){
        break;
        };
    }

return 0;
}