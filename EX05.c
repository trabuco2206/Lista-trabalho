#include <stdio.h>

int main(){

    int idade;

    printf("Qual sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Voce e maior de idade");
    } else {
        printf("voce nao e maior de idade");
    }
return 0;
}