#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um numero inteiro de 1 a 10: ");
    scanf("%d", &num);

    if (num < 1 || num > 10) {
        printf("Numero invalido"); 
    }
    
    if (num == 2 || num == 3 || num == 5 || num == 7) {
        printf("1");
    } else {
    
    }
return 0;
}