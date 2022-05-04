#include <stdio.h>
int main(){
    float litros, metroscubicos;
    printf("litros: ");
    scanf("%f", &litros);
    metroscubicos = litros / 1000;
    printf("totally %f", metroscubicos);
}