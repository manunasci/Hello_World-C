#include <stdio.h>
 
int main() {
  int x, i, maior=0, pos; 
     
     for(i=0; i<100; i++){
        scanf("%i", &x);
        
        if(x> maior){
            maior = x;
            pos = i + 1;
        }
     }
     
     printf("%i\n", maior);
     printf("%i\n", pos);
 
    return 0;
}