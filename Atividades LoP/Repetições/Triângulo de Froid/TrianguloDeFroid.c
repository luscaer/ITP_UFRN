#include <stdio.h>

int main(){
    int linhas, i, j;
    int contador = 1;
    scanf("%d", &linhas);

    if (linhas <= 0) printf("Você entrou com %d, tente de novo na próxima", linhas);
    else
    {
        for (i = 1; i <= linhas; i++)
        {
            for (j = 0; j < i; j++)
            {
                if (contador < 10)
                {
                    printf(" %d ", contador);
                    contador++;
                }
                else
                {
                    printf("%d ", contador);
                    contador++;
                }
            }
            printf("\n");
        }
    }

    return 0;
}