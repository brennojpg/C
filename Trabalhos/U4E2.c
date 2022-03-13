#include <stdio.h>
#include <ctype.h>

void pula(FILE *arqv);

int main(){
    
    char file[500], berro[500], a;
    int large, high, i = 0, x, j = 0;
    FILE *babado; //criando um arquivo
    
    
    while((x = getchar()) != '\n'){
        file[i++] = x;
    }
    
    file[i] = '\0';
    babado = fopen(file, "r");
    
    //caso dê algum erro, será impresso essa mensagem
    if(babado == NULL){
        printf("Erro: arquivo inexistente\n");
        return 0;
    } 
    
    
    //usando esse comando para por dentro do arquivo, no caso preencher
    fscanf(babado, "%s", berro);
    
    //criando um vetor pra pular
    pula(babado);
    
    //preenchendo a aultura e largura
    fscanf(babado, "%d %d", &high, &large);
    fscanf(babado, "%d", &x);
    
    
    int matriz[high][large];
    
    for(i = 0; i < high; i++){
        for (int j = 0; j < large; j++){
            fscanf(babado, "%d", &matriz[i][j]);
        }
    }
    
    for(i = 0; i < high; i++){
        for (int j = 0; j < large; j++){
            if(j == 0){
                printf("%3X", matriz[i][j]);
            }
            else{
                printf(" %3X", matriz[i][j]);
            }
            
        }
        printf("\n");
    }
    return 0;
}

//criando uma função para pular
void pula(FILE *arqv){
    char line[1000], aux;
    while((aux = fgetc(arqv)) != EOF && isspace(aux)){
        continue;
    }
    if(aux == '#'){
        
        fgets(line, 999, arqv);
        pula(arqv);
    }
    else{
        fseek(arqv, -1, SEEK_CUR);
    }
}