/*Em várias situações, precisamos ordenar informações. Um dos algoritmos de ordenação
mais simples (de implementar) realiza sucessivas trocas entre valores consecutivos levando,
a cada iteração, o maior elemento para o fim da sequência. Assim, na primeira iteração, o
maior elemento vai para sua posição ordenada (último). Na segunda iteração, o segundo maior
vai para sua posição (penúltimo). Na terceira iteração, será a vez do antepenúltimo e assim por diante.

Entrada

O seu programa deve ler da entrada-padrão um valor inteiro N seguido de N valores inteiros.

Saída

A saída consiste em várias linhas, cada uma contendo os valores da sequência na iteração corrente,
durante a execução do algoritmo. A primeira linha deve imprimir a sequência original (não ordenada)
enquanto a última linha deve imprimir os valores da sequência em ordem crescente.*/

#include <stdio.h>

void imprimeVetor(int x, int* vet){
    for(int i = 0; i < x; i++)
        printf("%d ", vet[i]);
    printf("\n");
}

void function(int x, int* vet){
    int i, j, vetAux, stop;
    imprimeVetor(x, vet);
    
    for(i = 0; i < x - 1; i++){
        for (j = 1; j < x; j++){
            if (vet[j-1] > vet[j]){
                vetAux = vet[j-1];
                vet[j-1] = vet[j];
                vet[j] = vetAux;
            }
        }
        imprimeVetor(x, vet);
    }
}

int main(void) {
    int valor, i;
    scanf("%d", &valor);
    int vet[valor];

    for(i = 0; i < valor; i++)
        scanf("%d", &vet[i]);

    function(valor, vet);
    return 0;
}