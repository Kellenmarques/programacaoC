#include <stdio.h>
int main(){
    int quantidadea;
    int quantidadeb;
    int quantidadec; 
    int soma;
    printf("Informe a quantidadea: ");
    scanf("%d",&quantidadea);
    printf("Informe a quantidadeb: ");
    scanf("%d",&quantidadeb);
    printf("Informe a quantidadec: ");
    scanf("%d",&quantidadec);
    // neste campo estou declarando a variavel soma. 
    soma = quantidadea + quantidadeb + quantidadec;
    printf("quantidade total %d",soma);
}