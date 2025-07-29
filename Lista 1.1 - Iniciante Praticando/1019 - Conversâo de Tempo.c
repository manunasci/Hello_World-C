#include <stdio.h>
 
int main() {
    int segundos, horas, minutos;

    scanf("%i", &segundos);
    horas = (segundos/60)/60;
    minutos = (segundos/60)% 60;
    segundos = segundos % 60;
    
    printf("%i:%i:%i\n", horas, minutos, segundos);
 
    return 0;
}