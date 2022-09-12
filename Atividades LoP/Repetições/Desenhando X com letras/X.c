/* Receber um número e uma letra, diminuir 1 do número lido e formar um x com 
a letra lida em número - 1 linhas */

#include <stdio.h>

int main(){
  int num, i, j, aux, aux2 = 1;
  char letra;

  scanf("%d %c", &num, &letra);

  aux = num;

  if (num % 2 != 0)
  {
  //Repetições decrescentes:
    for (i = 0; i < ((num-1)/2); i++)
    {
      //espaçamento decrescente
      if (i != 0)
        {
          for (j = 0; j < i; j++ )
          {
            printf(" ");
          } 
        }
        //print da letra inicial
        printf("%c", letra);
        //print do espaços
        for (j = 0; j < (aux-3); j++ )
        {
          printf(" ");
        }
        //Diminuição do aux para diminuir os espcaçamentos.
        aux = aux - 2;
        //print da letra final
        printf("%c\n", letra);
    }
        
    aux = num;

    //Repetições crescentes
    for (i = 0; i < ((num-1)/2); i++)
    {
      //espaçamento crescente
      for (j = 1; j < ((aux - 1) / 2); j++ )
      {
        printf(" ");
      }
      //print da letra inicial
      printf("%c", letra);
      //espaçamentos crescentes:
      if (i != 0)
      {
        for (j = 0; j < i; j++ )
        {
          printf("  ");
        }
      }
      //regra para o for diminuir
      aux = aux - 2;
      //print da letra final
      printf("%c\n", letra);
    }
  }
  else if(num % 2 == 0)
  {
  //Repetições decrescentes:
    for (i = 0; i < ((num/2)-1); i++)
    {
      //espaçamento decrescente
      if (i != 0)
        {
          for (j = 0; j < i; j++ )
          {
            printf(" ");
          } 
        }
        //print da letra inicial
        printf("%c", letra);
        //print do espaços
        for (j = 0; j < (aux-3); j++ )
        {
          printf(" ");
        }
        //Diminuição do aux para diminuir os espcaçamentos.
        aux = aux - 2;
        //print da letra final
        printf("%c\n", letra);
    }

    for (j = 0; j < ((num/2)-1); j++ )
      {
        printf(" ");
      }
    //print da letra do meio
    printf("%c\n", letra);
    
    aux = num;

    //Repetições crescentes
    for (i = 0; i < ((num/2)-1); i++)
    {
      //espaçamento crescente
      for (j = 1; j < ((aux - 1) / 2); j++ )
      {
        printf(" ");
      }
      //print da letra inicial
      printf("%c", letra);
      //espaçamentos crescentes:
        for (j = 0; j < aux2; j++ )
        {
          printf(" ");
        }
      //regra para o for diminuir
      aux = aux - 2;
      aux2 = aux2 + 2;
      //print da letra final
      printf("%c\n", letra);
    }
  }
  
  return 0;
}