#include <stdio.h>
 
int main() {
    int tpecorrido;
    float tcombustivel, vconsumomedio;

    scanf("%d%f", &tpecorrido, &tcombustivel);
    vconsumomedio = tpecorrido/tcombustivel;
    
    printf("%.3f km/l\n", vconsumomedio);
 
    return 0;
}