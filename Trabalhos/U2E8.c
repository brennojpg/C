#include <stdio.h>
#include <math.h>
int main(){
    
    int  i, j, numero = 100, perfeito[1000], cont2 = 2;
    long long int a, cont1 = 0, soma = 0;

    scanf("%lld", &a);
     
    for(i = 0; i < numero; i++){
        perfeito[i] = 1;
    }
     
     for(i = 2; i <= numero; i++){
        if(perfeito[i] == 1){
            for(j = i*i; j < 1000; j += i)
            perfeito[j] = 0;
        }
     }
        while(cont1 < a){
        if(perfeito[cont2] == 1){
            soma = pow(2,cont2-1)*(pow(2,cont2)-1);
            printf("%lld ", soma);
            cont1++;
        }
        cont2++;
    }
    return 0;
}