#include <stdio.h>
 
int main() {
     int i, x;
     
    scanf("%i", &x);
    for(i=2;i<=x;i=i+2){
        printf("%i^%i = %i\n", i, 2, i*i);
    }
 
    return 0;
}