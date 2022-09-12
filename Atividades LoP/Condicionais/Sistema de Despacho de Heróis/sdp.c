/* Em referência ao anime One punch man, informar se os heróis dão conta dos monstros ou se será preciso chamar
o personagem mais forte, o Saitama */ 

#include <stdio.h>

int main(){
//Criando as variáveis:
    int quantidade, classe, ameaca;
//Recebendo os dados:
    scanf("%d%d%d", &quantidade, &classe, &ameaca);
//Calculando e imprimindo resultados:
    if (quantidade == 0)
    {
        printf("Melhor chamar Saitama!\n");
    }
    else if (classe == ameaca)
    {
        if (classe == 5)
        {
            printf("Heróis vencerão!\n");
        }
        
        else if (quantidade >= 3)
        {
            printf("Heróis vencerão!\n");
        } 
        else
        {
            printf("Melhor chamar Saitama!\n");
        }
    }
    else if (classe > ameaca)
    {
        printf("Heróis vencerão!\n");
    }
    else
    {
        printf("Melhor chamar Saitama!\n");
    }

    return 0;
}