#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct informacoes{
    char aux[169], nome[51], matricula[13], endereco[65];
    char CPF[12], codigo[5], agencia[7], conta[10]; 
    char valorHoraStr[7];
    double valorPorHora;
}pessoa[10];

struct informacoes2{
char matricula2[14], horaStr[4], aux2[18];
int hora;
}pessoa2[10];

struct informacoes aux3;
struct informacoes2 aux4;

int main(){

    FILE *folha = fopen("Funcionarios.txt", "r");
    FILE *folha2 = fopen("Novembro.txt", "r");

    int i = 0, k = 0, j = 0;

    for(i = 0; i < 10; i++){
        fgets(pessoa[i].aux, 169, folha);
    }
    
    i = 0;
    for(i = 0; i < 10; i++){
        for (j = 0; j < strlen(pessoa[i].aux); j++){
            if((pessoa[i].aux[j] == ' ' && pessoa[i].aux[j+1] == ' ') || pessoa[i].aux[j] == '\n'){
                    continue;
            }
            else{
                if(j==0||j==51||j==63||j==130||j==141||j==145||j==151||j==160){
                    k = 0;
                }
                if(j < 51){
                    pessoa[i].nome[k] = pessoa[i].aux[j];
                    k++;
                }
                else if(j < 63){
                    pessoa[i].matricula[k] = pessoa[i].aux[j];
                    k++;
                }
                else if(j < 130){
                    pessoa[i].endereco[k] = pessoa[i].aux[j];
                    k++;
                }
                else if(j < 141 && pessoa[i].aux[j]!=' '){
                    pessoa[i].CPF[k] = pessoa[i].aux[j];
                    k++;
                }
                else if(j < 145  && pessoa[i].aux[j]!=' '){
                    pessoa[i].codigo[k] = pessoa[i].aux[j];
                    k++;
                }
                else if(j < 151  && pessoa[i].aux[j]!=' '){
                    pessoa[i].agencia[k] = pessoa[i].aux[j];
                    k++;
                }
                else if(j < 160 && pessoa[i].aux[j]!=' '){
                    pessoa[i].conta[k] = pessoa[i].aux[j];
                    k++;
                }
                else if(j < 167 && pessoa[i].aux[j]!=' '){
                    pessoa[i].valorHoraStr[k] = pessoa[i].aux[j];
                    k++;
                }
            } 
        }
        pessoa[i].valorPorHora = atof(pessoa[i].valorHoraStr);
    }
    for(i = 0; i < 10; i++){
        fgets(pessoa2[i].aux2, 18, folha2);
    }
   for (i = 0; i < 10; i++){
        for (j = 0; j < 17; j++){
            if(j < 12 && pessoa2[i].aux2[j] != ' ' && pessoa2[i].aux2[j] != '\n'){
                pessoa2[i].matricula2[j] = pessoa2[i].aux2[j];
            }
            else if(j > 12 && pessoa2[i].aux2[j] != ' ' && pessoa2[i].aux2[j] != '\n'){
                pessoa2[i].horaStr[j-13] = pessoa2[i].aux2[j];
            }
        }
        pessoa2[i].hora = atoi(pessoa2[i].horaStr);
    }
    
     for(i=0; i < 10; i++){
        for(j=i+1; j < 10; j++){
            if(strcmp(pessoa[i].nome,pessoa[j].nome) > 0){
                aux3 = pessoa[i];
                pessoa[i] = pessoa[j];
                pessoa[j] = aux3;
            }
        }
    }
    for(i=0; i < 10; i++){
        for(j=i+1; j < 10; j++){
            if(strcmp(pessoa[i].matricula,pessoa2[j].matricula2) == 0){
                aux4 = pessoa2[i];
                pessoa2[i] = pessoa2[j];
                pessoa2[j] = aux4;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        printf("%-50s|%s|%s|%s|%s|%.2f\n", pessoa[i].nome, pessoa[i].CPF,
            pessoa[i].codigo, pessoa[i].agencia, pessoa[i].conta, (pessoa[i].valorPorHora*pessoa2[i].hora));
    }
    return 0;
}