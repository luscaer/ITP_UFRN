/* Ler um tempo máximo e informar quais atletas com tempo menor ao tempo máximmp
serão classificados para as séries de uma competição. Dividir também o número
de atletas em séries */

#include <stdio.h>

int main(){
    double tempo_maximo = 0, tempo_atleta = 0;
    int quantidade_apto = 0, quantidade_series = 0;

    scanf("%lf", &tempo_maximo);

    while(tempo_atleta != -1)
    {
        if (tempo_atleta <= tempo_maximo && tempo_atleta > 0) quantidade_apto++;
        scanf("%lf", &tempo_atleta);
    }

    printf("%d ", quantidade_apto);

    if (quantidade_apto > 0 && quantidade_apto <= 8)
    {
        quantidade_series = 1;
    }
    else if (quantidade_apto > 8)
    {
        quantidade_series = 1;
        while (quantidade_apto > 8)
        {
            quantidade_apto = quantidade_apto - 8;
            quantidade_series++;
        }
    }

    printf("%d\n", quantidade_series);
    
    return 0;
}