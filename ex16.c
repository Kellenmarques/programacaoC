#include <stdio.h>
int main(){
    float polegadas, centimentros;
    printf("polegadas: ");
    scanf("%f", &polegadas);
    centimentros = polegadas * 2.54;
    printf("totally %f", centimentros);
}