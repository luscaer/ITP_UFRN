/*Numa escola as médias finais dos alunos estão armazenadas em um vetor cuja
ordem é a da lista de chamada da turma. Alunos com média maior ou igual a 7.0
estão aprovados, maior ou igual a 5.0 e menor que 7.0 estão em recuperação, e
abaixo de 5.0 estão reprovados. Escreva um programa que lê a quantidade de alunos
n da turma, e em seguida as suas nnn médias. Então, crie vetores que guardem a
lista de alunos aprovados, em recuperação e reprovados com as respectivas notas.

Entrada​

número n de alunos da turma;
número do aluno na chamada - sua média parcial (n vezes).
Saída​

Listas de alunos aprovados, em recuperação e reprovados identificados pelo seu número e sua nota entre parênteses;*/

#include <stdio.h>

int main(){
    int qtdAlunos, aux = 0, i;
    char lixo;
    scanf("%d", &qtdAlunos);
    int vetorAlunos[qtdAlunos];
    double vetorNotas[qtdAlunos];
    
    //Leitura dos alunos e notas:
    for(i = 0; i < qtdAlunos; i++)
        scanf("%d %c %lf", &vetorAlunos[i], &lixo, &vetorNotas[i]);
    
    //Alunos Aprovados:
    printf("Aprovados:");
    for(i = 0; i < qtdAlunos; i++){
        if(vetorNotas[i] >= 7){
            if (aux == 0){
                printf(" %d (%.1lf)", vetorAlunos[i], vetorNotas[i]);
                aux++;
            }
            else printf(", %d (%.1lf)", vetorAlunos[i], vetorNotas[i]);
        }
    }

    aux=0;

    printf("\nRecuperação:");
    for(i = 0; i < qtdAlunos; i++){
        if(vetorNotas[i] >= 5 && vetorNotas[i] < 7){
            if (aux == 0){
                printf(" %d (%.1lf)", vetorAlunos[i], vetorNotas[i]);
                aux++;
            }
            else printf(", %d (%.1lf)", vetorAlunos[i], vetorNotas[i]);
        }
    }

    aux=0;
    
    printf("\nReprovados:");
    for(i = 0; i < qtdAlunos; i++){
        if(vetorNotas[i] < 5){
            if (aux == 0){
                printf(" %d (%.1lf)", vetorAlunos[i], vetorNotas[i]);
                aux++;
            }
            else printf(", %d (%.1lf)", vetorAlunos[i], vetorNotas[i]);
        }
    }

    return 0;
}