#include <stdio.h>
int main(){
    float celsius, kelvin;
    printf("graus celsius: ");
    scanf("%f", &celsius);
    kelvin = celsius + 273,15;
    printf("totally %f",kelvin);
}