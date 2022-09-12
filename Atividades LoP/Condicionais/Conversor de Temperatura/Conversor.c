#include <stdio.h>

int main(){
    double temperatura;
    char escala;
    double tc, tf, tk;

    scanf("%lf %c", &temperatura, &escala);

    if (escala == "C")
    {
        tc = temperatura;
        tf = ((temperatura * 1.8) + 32);
        tk = (temperatura + 273.15);
    }
    else if (escala == "F")
    {
        tc = (temperatura - 32) / 1.8;
        tf = temperatura;
        tk = ((temperatura - 32) / 1.8) + 273.15;
    }
    else if (escala == "K")
    {
        tc = (temperatura - 273.15);
        tf = (((temperatura - 273.15) * 1.8) + 32);
        tk = temperatura;
    }

    printf("Celsius: %.2lf\n", tc);
    printf("Farenheit: %.2lf\n", tf);
    printf("Kelvin: %.2lf\n", tk);

    return 0;
