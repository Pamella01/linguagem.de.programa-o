#include<stdio.h>
int main(){
    int totalProduzidas, totalDefeituosas;
    float percentual;
    printf("Digite o total de pecas produzidas:");
    scanf("%d", &totalProduzidas);
    printf("Digite o total de pecas defeituosas");
    scanf("%d", &totalDefeituosas);
    percentual = (float)totalDefeituosas / totalProduzidas*100;
    if (percentual > 10) {
        printf("Necessita manutencao.\n");
    } else {
        printf("Não necessita manutencao.\n");
    }
    return 0;
}