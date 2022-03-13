#include <stdio.h>

int main(){

   unsigned long int a, i=0, soma=0;

   scanf("%lu", &a);

    for (i = 1; i <= a/2; i++){

        if (a%i==0)
            soma = soma + i;
    }
        
        if(soma == a){
            printf("SIM\n");
            }

        else{
            printf("NAO\n");
        }

return 0; 
}