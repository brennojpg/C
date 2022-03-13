#include <stdio.h>

int main(){

    int x, y, z, q, i = 0, maior, menor, cont = 0, divisor[50], dividendo[50], quoeficiente[50], resto[50];

    scanf("%d", &x);
    scanf("%d", &y);
    
    if (x >y){
    maior = x;
    menor = y;
    }

    else{
    maior = y;
    menor = x;
    }
           
    while (1){      
        divisor[i] = menor;
        dividendo[i] = maior;
        
        q = maior/menor;
        quoeficiente[i] = q;

        z = maior%menor;
        resto[i] = z;

        maior = menor;
        menor = z;

        i = i + 1;
        cont = cont + 1;
        
        if (z == 0){
            dividendo[i] = maior;
            break;
            
        }
    }
    
    for (i = 0; i < cont; i = i + 1){
        printf("%-5d ", quoeficiente[i]);
    }
   printf("\n");
    for (i = 0; i < cont + 1; i = i + 1){
        printf("%-5d ", dividendo[i]);
    }
   printf("\n");
    for (i = 0; i < cont; i = i + 1){
        printf("%-5d ", resto[i]);
    } 
    return 0;
}
