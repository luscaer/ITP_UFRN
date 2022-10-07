/*Um vetor é legal caso a diferença entre qualquer elemento e seu antecessor seja par.
Escreva uma função que recebe um vetor de inteiros e retorne se ele é legal ou não. Na
função principal leia um número inteiro positivo nnn​ e em seguida os nnn valores do vetor.
Então, exibe a mensagem "Legal" quando o vetor for legal, e "Chato" caso contrário.
Considere 0 como um número par.*/

#include <stdio.h>

int main(){
    int n, i, aux = 0;
    scanf("%d", &n);
    int vet[n];

    for(i = 0; i < n; i++)
        scanf("%d", &vet[i]);
    
    for(i = 0; i < (n - 1); i++)
        if(vet[(i + 1)] >= vet[i]) aux++;

    if(aux == (n - 1)) printf("Legal\n");
    else printf("Chato\n");

    return 0;
}