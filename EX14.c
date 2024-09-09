#include <stdio.h>

int main(){

    char turno;

    printf("Escolha seu turno: \n");
    printf("Para manha [1]\n");
    printf("Para tarde [2]\n");
    printf("Para noite [3]\n");
    printf(": ");
    scanf("%c", &turno);

    switch (turno) {
        case '1':
            printf("Bom dia, seja bem vindo!!!");
            break;
        case '2':
            printf("Boa tarde, seja bem vindo!!!");
            break;
        case '3':
            printf("Boa noite, seja bem vindo!!!");
            break;
        default:
            printf("Opcao invalida!");
            break;
    }
   
return 0;
}