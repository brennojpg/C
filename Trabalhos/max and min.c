#include <stdio.h>
#include <stdlib.h>

int contaIsso (const void *a, const void *b){
    int int_a = *((int*)a);
    int int_b = *((int*)b);

    if (int_a < int_b) return -1;
    else if (int_a > int_b) return 1;
    else return 0;
}

void miniMaxSomatorio(int *soma){
    
    int max = 0, min = 0;

    min = soma[0] + soma[1] + soma[2] + soma[3];
    max = soma[1] + soma[2] + soma[3] + soma[4];

    printf("A soma maxima equivale a: %d e o menor equivale a: %d", max, min);
}

int main (){

    int soma[5], i = 0;

    for (i = 0; i <= 4; i++){
    scanf("%d", &soma[i]);
    }
    qsort(soma, 5, sizeof(int), contaIsso);
    miniMaxSomatorio(soma);
    return 0;
}
