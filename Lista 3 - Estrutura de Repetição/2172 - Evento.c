#include <stdio.h>
 
int main() {
    int x=1;
    long m=1;
    
    while(x !=0 && m !=0){
        scanf("%d%d",&x,&m);
        if(x==0 && m==0){
              break;
        }
        printf("%d\n", x*m);
    }

    return 0;
}