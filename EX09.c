#include <stdio.h>

int main(){

    float salario_bruto;
    float taxa;

    printf("Qual o salario bruto: ");
    scanf("%f", &salario_bruto);

    if (salario_bruto <= 2112.00) {
        taxa = 0;
    } else if (salario_bruto <= 2826.65) {
        taxa = salario_bruto * 0.075 - 158.40;
    } else if (salario_bruto <= 3751.05) {
        taxa = salario_bruto * 0.15 - 370.40;
    } else if (salario_bruto <= 4664.68) {
        taxa = salario_bruto * 0.225 - 651.73;
    } else {
        taxa = salario_bruto * 0.275 - 884.96;
    }

    printf("A taxa retida e de R$%2.f ", taxa);

return 0;
}