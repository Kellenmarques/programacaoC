#include <stdio.h>
int main(){
    float centimetros, polegadas;
    printf("centimetros: ");
    scanf("%f", &centimetros);
    polegadas = centimetros / 2.54;
    printf("totally %f", polegadas);
}