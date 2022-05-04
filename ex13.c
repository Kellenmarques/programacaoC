#include <stdio.h>
int main(){
    float km, milhas;
    printf("km: ");
    scanf("%f", &km);
    milhas = km / 1.61;
    printf("totally %f", milhas);
}