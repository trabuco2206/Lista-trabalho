#include <stdio.h>

int main(){

    float nota;

    printf("Qual sua nota final: ");
    scanf("%f", &nota);

    if (nota < 0 || nota > 10) {
        printf("Erro");
    } else if (nota >= 9.0) {
        printf("Classificacao: A");
    } else if (nota >= 7.0) {
        printf("Classificacao: B");
    } else if (nota >= 5.0) {
        printf("Classificacao: C");
    } else {
        printf("Classificacao: D");
    }
    
return 0;
}