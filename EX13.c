#include <stdio.h>

int main() {
    char operador;
    double num1, num2, result;

    printf("Escolha uma operacao (+, -, *, /): ");
    scanf(" %c", &operador); 

    printf("Digite dois numeros (separados por espaco): ");
    scanf("%lf %lf", &num1, &num2);

    switch (operador) {
        case '+':
            result = num1 + num2;
            printf("Resultado: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Resultado: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Resultado: %.2lf\n", result);
            break;
        case '/':
            
            if (num2 != 0) {
                result = num1 / num2;
                printf("Resultado: %.2lf\n", result);
            } else {
                printf("Erro: Divisao por zero não e permitida.\n");
            }
            break;
        default:
            printf("Erro: Operação nao reconhecida.\n");
            break;
    }

return 0;
}