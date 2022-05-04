#include <stdio.h>
int main(){
    float metroscubicos, litros;
    printf("metroscubicos: ");
    scanf("%f", &metroscubicos);
    litros = 1000 * metroscubicos;
    printf("totally %f", litros);
}