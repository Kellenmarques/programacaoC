#include <stdio.h>
int main(){
    float radianos, graus;
    printf("radianos: ");
    scanf("%f", &radianos);
    graus = radianos * 180/3.14;
    printf("totally %f", graus);
}