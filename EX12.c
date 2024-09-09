#include <stdio.h>

int main(){

    float valor;
    float ipva;

    printf("Qual o valor do veiculo: ");
    scanf("%f", &valor);

    if (valor <= 100000.00)
    {
        ipva = (valor * 0.01);
    } else if (valor <= 300000.00)
    {
        ipva = (valor * 0.015);
    } else if (valor <= 500000.00)
    {
        ipva = (valor * 0.02);
    } else {
        ipva = (valor * 0.05);
    }
    
    printf("O valor do ipva do veiculo e de R$%2.f", ipva);
    
return 0;
}