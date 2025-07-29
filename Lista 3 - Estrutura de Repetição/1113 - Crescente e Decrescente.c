#include <stdio.h>
 
int main() {
    int x,y;
    
    do{
        scanf("%i %i", &x, &y);
        if(x<y){
            printf("Crescente\n");
        }
        else if(x>y){
            printf("Decrescente\n");
        }
    }
    while(x!=y);
 
    return 0;
}