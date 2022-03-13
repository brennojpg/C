#include <stdio.h>
#include <math.h> //importando a biblioteca matematica
#include <string.h> //importando a biblioteca string

int main(){

    char bin[113];
    int tam = 0, aux, asc, exp = 0;
    long double result = 0, pot; //declarando as variaveis
    
    while((bin[tam] = getchar()) != '\n' && tam <= 113){ //criando e pondo o vetor dentro da string
        tam = tam + 1;
    }
    
    bin[tam] = '\0';
    
    for (aux = (strlen(bin) - 1) ; aux > -1 ; aux = aux - 1 ){ //contando ao contrário
    
        asc = bin[aux] - '0'; //tirando o ASCII
        pot = asc*pow(2,exp);  //pow(base, expoente); poentência
        result = result + pot;
        exp = exp + 1; // contando um a mais do expoente]
        }
        
    printf("\n%0.Lf", result);
    return 0;
}