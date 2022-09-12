/* Informar se um comerciante de hamburguer precisa dar troco ou
informar se falta */

#include <stdio.h>

int main(){
    int combo, dinheiro;
    int valor, dinheiro2;

    scanf("%d%d", &combo, &dinheiro);

    switch (combo)
    {
    case 1:
        valor = 12;
        break;
    case 2:
        valor = 23;
        break;
    case 3:
        valor = 31;
        break;
    case 4:
        valor = 28;
        break;
    case 5:
        valor = 15;
        break;
    default:
        break;
    
    }

    if (valor == dinheiro)
    {
        printf("Deu certim!\n");
    }
    else if (dinheiro > valor)
    {
        dinheiro2 = dinheiro - valor;
        printf("Troco = %d reais\n", dinheiro2);
    }
    else if (valor > dinheiro)
    {
        dinheiro2 = valor - dinheiro;
        printf("Saldo insuficiente! Falta %d reais\n", dinheiro2);
    }

    return 0;
}