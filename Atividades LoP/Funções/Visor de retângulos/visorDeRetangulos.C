/*Um dos principais algoritmos na área de computação gráfica é o algoritmo de recorte utilizado 
para determinar quais partes de um objeto devem ser exibidos na tela. Você deve desenvolver uma versão
simplificada utilizada num programa de processamento de retângulos indicando se um retângulo está
dentro de outro. Neste programa, os retângulos são representados por dois pontos: <esquerdo, inferior>
e o <direito, superior>.
O programa deve iniciar recebendo as informações do retângulo da tela representando a área visível e para
cada retângulo subsequente ele deve determinar se ele está contido, contém ou possui uma interseção com a
área visível, ou seja, necessita de um tratamento para exibição. A entrada encerra com os valores 0,0,0,0.
Você deve implementar uma função para efetuar essa verificação, ou seja, dados dois retângulos, determinar
se o primeiro contém o segundo, ou se o segundo contém o primeiro, ou se nada pode ser afirmado. Desse modo,
você deve identificar quais são os parâmetros, o retorno e como ela será aplicada no programa principal.
Por exemplo, na figura abaixo, a tela (retângulo A) é especificada pelos pontos <5,5> e <10,10> e o retângulo
B pelos pontos <7,7> e <8,8>, neste caso, o retângulo B se encontra dentro do A.*/

#include <stdio.h>

void funcao(double a, double b, double c, double d, double w, double x, double y, double z){
    if (a < w && b < x && c > y && d > z)
        printf("(<%.2lf,%.2lf>,<%.2lf,%.2lf>) contem (<%.2lf,%.2lf>,<%.2lf,%.2lf>).\n", a, b, c, d, w, x, y, z);
    else if (a > w && b > x && c < y && d < z)
        printf("(<%.2lf,%.2lf>,<%.2lf,%.2lf>) contem (<%.2lf,%.2lf>,<%.2lf,%.2lf>).\n", w, x, y, z, a, b, c, d);
    else printf("Nao posso afirmar!\n");
}

int main(){
    double n1, n2, n3, n4;
    double num1, num2, num3, num4;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    int aux = 0;
    while (aux == 0){
        scanf("%lf %lf %lf %lf", &num1, &num2, &num3, &num4);
        if (num1 == 0 && num2 == 0 && num3 == 0 && num4 == 0) break;
        funcao(n1, n2, n3, n4, num1, num2, num3, num4);
    }
    
    return 0;
}

