```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Ordenando as ariáveis dentro do struct
struct informacoes{
    char aux[169], nome[51], matricula[13], endereco[65];
    char CPF[12], codigo[4], agencia[7], conta[9]; 
    char matricula2[14], aux2[18];
    char horaStr[3], valorHoraStr[7];
    float valorPorHora;
    int hora;
}pessoa[10];

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
                if(j==0||j==51||j==64||j==131||j==143||j==146||j==152||j==161){
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
                else if(j < 131){
                    pessoa[i].endereco[k] = pessoa[i].aux[j];
                    k++;
                }
                else if(j < 143){
                    pessoa[i].CPF[k] = pessoa[i].aux[j];
                    k++;
                }
                else if(j < 146){
                    pessoa[i].codigo[k] = pessoa[i].aux[j];
                    k++;
                }
                else if(j < 152){
                    pessoa[i].agencia[k] = pessoa[i].aux[j];
                    k++;
                }
                else if(j < 161){
                    pessoa[i].conta[k] = pessoa[i].aux[j];
                    k++;
                }
                else if(j < 168){
                    pessoa[i].valorHoraStr[k] = pessoa[i].aux[j];
                    k++;
                }
            } 
        }
        pessoa[i].valorPorHora = atof(pessoa[i].valorHoraStr);
    }
    /*for(i = 0; i < 10; i++){
        printf("%-50s %s %s %s %s %s %s %s \n", pessoa[i].nome, pessoa[i].matricula,
        pessoa[i].endereco, pessoa[i].CPF, pessoa[i].codigo,pessoa[i].agencia,pessoa[i].conta,
        pessoa[i].valorHoraStr);
    }*/


    for(i = 0; i < 10; i++){
        fgets(pessoa[i].aux2, 18, folha2);
    }

   for (i = 0; i < 10; i++){
        for (j = 0; j < 17; j++){
            if(j < 12 && pessoa[i].aux2 != ' ' && pessoa[i].aux2[j] != '\n'){
                pessoa[i].matricula2[j] = pessoa[i].aux2[j];
            }
            else if(j > 12 && pessoa[i].aux2 != ' ' && pessoa[i].aux2[j] != '\n'){
                pessoa[i].horaStr[j-13] = pessoa[i].aux2[j];
            }
        }
        pessoa[i].hora = atoi(pessoa[i].horaStr);
    }

    for (i = 0; i < 10; i++){
        printf("%s %d %f\n", pessoa[i].matricula2, pessoa[i].hora, pessoa[i].valorPorHora);
    }
    

    return 0;
}```