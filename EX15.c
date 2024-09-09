#include <stdio.h>
#include <string.h>

#define USD_TO_BRL 5.30
#define EUR_TO_BRL 6.20
#define BRL_TO_USD 0.19
#define BRL_TO_EUR 0.16

int main() {
    char sourceCurrency[4], targetCurrency[4];
    double amount, convertedAmount;

    printf("Digite a moeda de origem (BRL, USD, EUR): ");
    scanf("%s", sourceCurrency);
    
    printf("Digite a moeda de destino (BRL, USD, EUR): ");
    scanf("%s", targetCurrency);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &amount);

    if (strcmp(sourceCurrency, "BRL") == 0) {
        if (strcmp(targetCurrency, "USD") == 0) {
            convertedAmount = amount * BRL_TO_USD;
            printf("Resultado: %.2lf USD\n", convertedAmount);
        } else if (strcmp(targetCurrency, "EUR") == 0) {
            convertedAmount = amount * BRL_TO_EUR;
            printf("Resultado: %.2lf EUR\n", convertedAmount);
        } else if (strcmp(targetCurrency, "BRL") == 0) {
            printf("Resultado: %.2lf BRL\n", amount);
        } else {
            printf("Erro: Moeda de destino não reconhecida.\n");
        }
    } else if (strcmp(sourceCurrency, "USD") == 0) {
        if (strcmp(targetCurrency, "BRL") == 0) {
            convertedAmount = amount * USD_TO_BRL;
            printf("Resultado: %.2lf BRL\n", convertedAmount);
        } else if (strcmp(targetCurrency, "EUR") == 0) {
            convertedAmount = amount * USD_TO_BRL * BRL_TO_EUR;
            printf("Resultado: %.2lf EUR\n", convertedAmount);
        } else if (strcmp(targetCurrency, "USD") == 0) {
            printf("Resultado: %.2lf USD\n", amount);
        } else {
            printf("Erro: Moeda de destino não reconhecida.\n");
        }
    } else if (strcmp(sourceCurrency, "EUR") == 0) {
        if (strcmp(targetCurrency, "BRL") == 0) {
            convertedAmount = amount * EUR_TO_BRL;
            printf("Resultado: %.2lf BRL\n", convertedAmount);
        } else if (strcmp(targetCurrency, "USD") == 0) {
            convertedAmount = amount * EUR_TO_BRL * BRL_TO_USD;
            printf("Resultado: %.2lf USD\n", convertedAmount);
        } else if (strcmp(targetCurrency, "EUR") == 0) {
            printf("Resultado: %.2lf EUR\n", amount);
        } else {
            printf("Erro: Moeda de destino não reconhecida.\n");
        }
    } else {
        printf("Erro: Moeda de origem não reconhecida.\n");
    }

    return 0;
}