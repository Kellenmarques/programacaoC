#include <stdio.h>
int main(){
    float celsius, fahrenheit;
    printf("graus celsius: ");
    scanf("%f", &celsius);
    fahrenheit = celsius*(9.0/5.0)+32.0;
    printf("totally %f",fahrenheit);
}