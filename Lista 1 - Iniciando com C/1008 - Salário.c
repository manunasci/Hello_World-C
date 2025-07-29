#include <stdio.h>
 
int main() {
    int numero, qhoras;
    float vhora, salario;

    scanf("%d%d%f", &numero, &qhoras, &vhora);
    salario = qhoras*vhora;
    
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero, salario);

    return 0;
}