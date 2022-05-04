#include <stdio.h>
int main(){
    float quilogramas, libras;
    printf("quilogramas: ");
    scanf("%f", &quilogramas);
    libras = quilogramas/0.45;
    printf("totally %f", libras);
}