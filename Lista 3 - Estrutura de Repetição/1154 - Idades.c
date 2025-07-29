#include <stdio.h>
 
int main() {
    int idade=0;
    int soma=0;
    int cont=-1;
    
    while(idade>=0){
        cont ++;
        soma= soma+idade;
        scanf("%i", &idade);
    }
    
    printf("%.2f\n",(1.0*soma)/cont);

    return 0;
}