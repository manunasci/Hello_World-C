#include <stdio.h>
 
int main() {
    int pcodigo, npecas, dpcodigo, dnpecas;
    float vunitario, vtotal, dvunitario;
    
    scanf("%d%d%f", &pcodigo, &npecas, &vunitario);
    scanf("%d%d%f", &dpcodigo, &dnpecas, &dvunitario);
    vtotal = (vunitario*npecas)+(dvunitario*dnpecas);
    
    printf("VALOR A PAGAR: R$ %.2f\n",vtotal);
 
    return 0;
}