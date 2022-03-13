#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    
    char palin[30];
    int i = 0, tam = 0, condicao;
    
    fgets(palin, 30, stdin);
    tam = strlen(palin);
    
    for (i = (strlen(palin) - 1); i > (strlen(palin)/2) ; i--){
    
    if (palin[tam - 1 - i] != palin[i - 1]){
        condicao = false;
        printf("NAO\n");
        break;
    }
    else{
    condicao = true;
    }
    }
    
    if (condicao == true){
    printf("SIM\n");
    }
    return 0;
}