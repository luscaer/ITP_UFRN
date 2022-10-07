/*Na matemática, um número perfeito é um número inteiro para o qual a
soma de todos os seus divisores positivos próprios (excluindo ele mesmo)
é igual ao próprio número. Por exemplo o número 6 é perfeito, pois 1+2+3 é igual a 6.
Sua tarefa é escrever um programa que utiliza uma função com tipo de retorno bool, que
recebe um inteiro x e retorna true se x for perfeito ou false caso contrário. Seu programa
deve utilizar a função para determinar se um número é perfeito ou não.
A primeira linha da entrada contém um inteiro N, indicando o número de
casos a serem verificados. Cada uma das N linhas seguintes contém um valor
inteiro X, que pode ser ou não, um número perfeito. Para cada caso de teste
de entrada, imprima a mensagem “X eh perfeito” ou “X nao eh perfeito”, de acordo com a especificação fornecida.*/

#include <stdio.h>

int numPerfeito (num){
    int soma = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0) soma += i;
    }
    if (soma == num) return 1;
    else return 0;
}

int main(){
    int casos, num;

    scanf("%d", &casos);

    for (int i = 0; i < casos; i++)
    {
        scanf("%d", &num);
        if (numPerfeito(num)) printf("%d eh perfeito\n", num);
        else printf("%d nao eh perfeito\n", num);
    }
}