#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//função pra contar quantas palavras tem dentro do array, não contando espaço, vírgula, ponto, ponto e vírgula, dois pontos, tab e enter.
int testBabado(char *abc){
    int ehSim = 0, ehNao = 0, i = 0, cont = 0;

//aqui estamos criando um loop contando o array e pondo as nossas limitações
    for (i = 0; i < strlen(abc); i++){
        if(abc[i] != ' ' && abc[i] != '.' && abc[i] != ',' && abc[i] != ';' && abc[i] != ':' && abc[i] !='\n' && abc[i] != '\t'){
        ehSim = 1;

//aqui usamos o boleano pra identificar caso seja uma palavra true e caso nao, falso,e com isso adicionando ao contador
        if (ehSim == 1 && ehNao == 0){
            cont++;
            ehNao = ehSim;
        }
    }
        else{
            ehSim = 0;
            ehNao = ehSim;
        }
    }
    return cont;
}

//entrando na main e usando a função criada
int main(){ 

    char abc[1024], impress;


    printf("Insira uma frase ate 1024 de capacidade de letras: ");
    fgets(abc, 1024, stdin);
    impress = testBabado(abc);

    printf("Numero de palavras: %d", impress);

    return 0;
}