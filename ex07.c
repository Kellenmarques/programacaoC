#include <stdio.h>
int main(){
    float fahrenheit, celsius;
    printf("graus fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = 5.0*(fahrenheit-32.0)/9.0;
    printf("totally %f",celsius);
}