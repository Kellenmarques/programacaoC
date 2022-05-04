#include <stdio.h>
int main(){
    float graus, radianos;
    printf("graus: ");
    scanf("%f", &graus);
    radianos = graus * 3.14/180;
    printf("totally  %f", radianos);
}