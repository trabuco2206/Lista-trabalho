#include <stdio.h>

int main(){

    int lado1;
    int lado2;
    int lado3;

    printf("Qual o lado 1: ");
    scanf("%d", &lado1);
    printf("Qual o lado 2: ");
    scanf("%d", &lado2);
    printf("Qual o lado 3: ");
    scanf("%d", &lado3);

    if ((lado1 + lado2 == lado3) || (lado1 + lado3 == lado2) || (lado2 + lado3 == lado1)) 
    {
        printf("1");
    }
    
return 0;
}