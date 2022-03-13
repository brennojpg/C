#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    FILE *funciona; //criando um arquivo
    char text[1000], carac;
    int i = 0 , sizeAll = 0, linha = 0, impressos = 0;
    fgets(text,1000, stdin);


    for (i = 0; i < 1001; i++){
        switch (text[i]){
            case '\n':
            text[i] = '\0';
        }
    }
    
    funciona = fopen(text, "r");
    
    if (funciona == NULL){
        printf("Erro no arquivo %s\n", text);
        return 0;

    }
    
    while(carac != EOF){
    
    carac = fgetc(funciona);
        
        if (carac == '\n'){
            linha++;
        }
        
        if(carac){
            sizeAll++;
        }  
        
    }
    
    impressos = sizeAll - linha;
    
    
    printf("%d\n%d\n%d", sizeAll-1, impressos-1, linha);
    
    fflush(funciona);
    fclose(funciona);

    return 0;
}
