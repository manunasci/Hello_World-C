#include <stdio.h>
 
int main() {
    int ano, mes, dia;

    scanf("%i", &dia);
    ano = dia/365;
    dia %= 365;
    mes = dia/30;
    dia %= 30;
    
    printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n", ano, mes, dia);
 
    return 0;
}