#include <stdio.h>
int main()
{
    float salario_bruto;
    float inss;

    printf("Qual o salario do funcionario? ");
    scanf("%f", &salario_bruto);

    if (salario_bruto <= 1320.00) {
        inss = (salario_bruto * 0.075);
    } else if (salario_bruto <= 2571.29) {
        inss = (salario_bruto * 0.09);
    } else if (salario_bruto <= 3856.94) {
        inss = (salario_bruto * 0.12);
    } else if (salario_bruto <= 7507.49) {
        inss = (salario_bruto * 0.14);
    } else {
        inss = (salario_bruto * 0.14); //se nao colocasse isso, acima de 7507.49 estava dando zerado
    }

    printf("O desconto total do INSS foi de R$%.2f", inss);

return 0;
}