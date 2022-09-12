#include <stdio.h>

int main(){
    int pessoa1, pessoa2, pessoa3, pessoa4;
    int soma;

    scanf("%d%d%d%d", &pessoa1, &pessoa2, &pessoa3, &pessoa4);
    soma = pessoa1 + pessoa2 + pessoa3 + pessoa4;

    if (soma > 26)
    {
        soma = soma - 26;
    }
    
    switch (soma)
    {
    case 0:
        printf("Ei! Ninguém colocou nada!\n");
        break;
    case 1:
        printf("Letra: A\n");
        break;
    case 2:
        printf("Letra: B\n");
        break;
    case 3:
        printf("Letra: C\n");
        break;
    case 4:
        printf("Letra: D\n");
        break;
    case 5:
        printf("Letra: E\n");
        break;
    case 6:
        printf("Letra: F\n");
        break;
    case 7:
        printf("Letra: G\n");
        break;
    case 8:
        printf("Letra: H\n");
        break;
    case 9:
        printf("Letra: I\n");
        break;
    case 10:
        printf("Letra: J\n");
        break;
    case 11:
        printf("Letra: K\n");
        break;
    case 12:
        printf("Letra: L\n");
        break;
    case 13:
        printf("Letra: M\n");
        break;
    case 14:
        printf("Letra: N\n");
        break;
    case 15:
        printf("Letra: O\n");
        break;
    case 16:
        printf("Letra: P\n");
        break;
    case 17:
        printf("Letra: Q\n");
        break;
    case 18:
        printf("Letra: R\n");
        break;
    case 19:
        printf("Letra: S\n");
        break;
    case 20:
        printf("Letra: T\n");
        break;
    case 21:
        printf("Letra: U\n");
        break;
    case 22:
        printf("Letra: V\n");
        break;
    case 23:
        printf("Letra: W\n");
        break;
    case 24:
        printf("Letra: X\n");
        break;
    case 25:
        printf("Letra: Y\n");
        break;
    case 26:
        printf("Letra: Z\n");
        break;
    default:
        break;
    }

    return 0;
}