#include <studio.h>

#define PI 3.14159;
int main(){
    double Vraio, volume;

    scanf("%lf", &Vraio);
    volume = (4/3.0) * PI * Vraio * Vraio;

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}