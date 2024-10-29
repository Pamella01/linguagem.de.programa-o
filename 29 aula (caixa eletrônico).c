#include<stdio.h>
int main () {
    int opcao;
    printf("Digite uma opção (1 - Saldo, 2 - Extrato, 3 - Saque, 4 - Sair): ");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
        printf("Saldo\n");
        break;
        case 2:
        printf("Extrato\n");
        break;
        case 3:
        printf("Saque\n");
        break;
        case 4:
        printf("Sair\n");
        break;
        default:
        printf("Opcao invalida\n"); 
    }
    return 0;

}