/*Em matemática, a diferença simétrica de dois conjuntos é o conjunto de elementos que estão em um
(e apenas um) dos conjuntos (wikipédia). Em outras palavras, é o resultado da união dos conjuntos
com exceção dos elementos que estão em ambos (sua interseção). Por exemplo, considere os conjuntos
A = {1,2,3} e B = {3, 4}. A união de A e B é {1, 2, 3, 4} e a interseção é {3}. Logo, a diferença simétrica é {1, 2, 4}.
Escreva um programa que leia da entrada-padrão os valores de dois conjuntos e envie para a saída a diferença simétrica deles.

Entrada

A entrada de dados consiste em 3 linhas. A primeira linha contém dois valores inteiros N e M indicando a
quantidade de elementos de cada um dos conjuntos. A segunda linha contém N valores inteiros com os valores
do primeiro conjunto. Por fim, a terceira linha contém M valores inteiros com os valores do segundo conjunto.
Vale salientar que os valores de cada conjunto não se repetem (esta é uma propriedade dos conjuntos).

Saída

Seu programa deve enviar para a saída uma única linha contendo a sequência de valores do conjunto resultante
da diferença simétrica em ordem crescente.

Restrições

0 < N < 50
0 < M < 50*/

#include <stdio.h>

int auxUniao(int x, int y, int* vet, int* vet2){
    int i, j, aux = 0;
    for(i = 0; i < x; i++)
        for(j = 0; j < y; j++)
            if(vet[i] == vet2[j]) aux++;
    aux = x + y - aux;
    return aux;
}

int auxIntersecao(int x, int y, int* vet, int* vet2){
    int i, j, aux = 0;
    for(i = 0; i < x; i++)
        for(j = 0; j < y; j++)
            if(vet[i] == vet2[j]) aux++;
    return aux;
}

void bubbleSort(int x, int* vet, int y){
    for(int i = 0; i < x - 1; i++)
        for (int j = 1; j < x; j++)
            if (vet[j-1] > vet[j]){
                y = vet[j-1];
                vet[j-1] = vet[j];
                vet[j] = y;
            }
}

void diferencaSimetrica(int x, int y, int* vet, int* vet2){
    int aux1 = 0, aux2 = 0, aux3 = 0, aux4 = 0, aux5 = 0;
    int i, j;
    //união
    aux = auxUniao(x, y, vet, vet2);
    int vetAux[aux];

    for(i = 0; i < x; i++)
        vetAux[i] = vet[i];

    aux1 = i;

    for(j = 0; j < y; j++){
        for(i = 0; i < x; i++){
            if (vet2[j] != vet[i]) vetAux[aux1] = vet2[j];
            else vetAux[aux1] = 51;
        }
        if (vetAux[aux1] != 51) aux1++;
    }
    //Ordenar união:
    aux1 = 0;
    bubbleSort(aux, vetAux, aux1);
    //interseção
    aux2 = auxIntersecao(x, y, vet, vet2);
    if(aux2 == 0){
        for(i = 0; i < aux; i++) printf("%d ", vetAux[i]);
        printf("\n");
    }
    int vetAux1[aux2];
    
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            if(vet[i] == vet2[j]){
                vetAux1[aux3] = vet[i];
                break;
            }
            else vetAux1[aux3] = 51;
        }
        if (vetAux1[aux3] != 51) aux3++;
    }
    //Diferença Simetrica
    for(i = 0; i < aux; i++)
        for(j = 0; j < aux2; j++)
            if(vetAux[i] == vetAux1[j]) aux4++;
    
    aux4 = aux - aux4;
    int vetAux2[aux4];

        for(i = 0; i < aux; i++){
            for(j = 0; j < aux2; j++){
                if(vetAux[i] == vetAux1[j]){
                    vetAux2[aux5] = 51;
                    break;
                }
                else vetAux2[aux5] = vetAux[i];
            }
            if(vetAux2[aux5] != 51) aux5++;
        }

    if(aux2 != 0){
        for(i = 0; i < aux4; i++) printf("%d ", vetAux2[i]);
        printf("\n");
    }
    
}

int main(){
    int n1, n2, i;
    scanf("%d %d", &n1, &n2);
    int vetor1[n1], vetor2[n2];
    
    for(i = 0; i < n1; i++) scanf("%d", &vetor1[i]);
    for(i = 0; i < n2; i++) scanf("%d", &vetor2[i]);

    diferencaSimetrica(n1, n2, vetor1, vetor2);

    return 0;
}