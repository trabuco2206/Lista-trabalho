#include <stdio.h>

int main(){

    float produto;
    float desconto;

    printf("Qual o valor do produto: ");
    scanf("%f", &produto);

    if (produto <= 1000.00)
    {
        desconto = (produto * 0.05);
    } else if (produto <= 5000.00)
    {
        desconto = (produto * 0.1);
    } else {
        desconto = (produto * 0.15);
    }
    
    printf("O valor do desconto e de R$%2.f ", desconto);

return 0;
}