/*Para ajudar o estagiário Juca a compreender o conceito de funções, você sugeriu a
seguinte atividade: determinar se dois números são amigos utilizando funções.
Definição: dois números naturais diferentes são amigos se cada um for igual à
soma dos divisores do outro (sem incluir os próprios números nos divisores).
Assim, você forneceu o trecho de código abaixo e pediu para ele implementar as
funções e depois criar um programa que recebe dois intervalos naturais L1 = [A,B]
e L2 = [C,D] e apresenta todos os valores em L1 que possuem ao menos um amigo em L2.*/

#include <stdio.h>

int divisivel (int x, int y){
    if (x % y == 0) return 1;
    else return 0;
}

int divisores(int x){
    int soma = 0;
    for (int i = 1; i < x; i++)
    {
        if (divisivel(x,i)) soma += i;
    }
    return soma;
}

int testeAmigo(int x, int y){
    int somaX = divisores(x);
    int somaY = divisores(y);
    if (somaX == y && somaY == x && x != y) return 1;
    else return 0;
}


int main(){
    int n1, n2, n3, n4, aux = 0;
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    for (int i = n1; i <= n2; i++)
    {
        for (int j = n3; j < n4; j++)
        {
            if (testeAmigo(i,j)) 
            {
                printf("O %d possui um amigo!\n", i);
                aux++;
            }
        }
    }

    if (aux == 0)
    {
        printf("Os intervalos nao apresentam amigos!\n");
    }
    
    return 0;
}

