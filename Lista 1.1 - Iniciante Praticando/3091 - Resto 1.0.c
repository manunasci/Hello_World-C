#include <stdio.h>
 
int main() {
    int A, B, resto;

    scanf("%i", &A);
    scanf("%i", &B);
    resto = A%B;
    
    printf("%i\n", resto);
 
    return 0;
}