/*Escreva uma função chamada ehPar que verifica se um número é par.
Essa função deve retornar o valor true em caso afirmativo, e false caso contrário. O programa deve chamar essa função.*/

#include <stdio.h>

int parOuImpar(int x){
    if (x % 2 == 0) return 1;
    else return 0;
}

int main(){
    int num;
    scanf("%d", &num);

    if (parOuImpar(num)) printf("true");
    else printf("false");
    
    return 0;
}