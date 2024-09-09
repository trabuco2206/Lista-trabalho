#include <stdio.h>
int main()
{
    float salario;
    float salarioFinal;
    float imposto;

    printf("Qual o salario do funcionario? ");
    scanf("%f", &salario);

    if (salario > 5000.00) {
        imposto = (salario * 0.20);
    } else {
        imposto = (salario* 0.10);
    }

    salarioFinal = salario - imposto;

    printf("O desconto total do imposto foi de R$%.2f\n", imposto);

return 0;
}