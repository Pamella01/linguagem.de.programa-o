#include <stdio.h>
#include <math.h>
int main () {
    float capital, juros_mensal, montante;
    int periodo, mes;
    printf("Capital iniciada: ");
    scanf("%f, &capital");
    printf("Taxa de juros (% ao mes): ");
    scanf("%f", &juros_mensal);
    printf("Periodo (meses): ");
    scanf("%d", &periodo);
    juros_mensal /= 100; // converter para decimal
    for (mes = 1; mes <= periodo; mes++){
        montante = capital * pow((1 + juros_mensal), mes);
        printf("%d° mes: R$ %.2f\n", mes, montante);
    }
    return 0;
}