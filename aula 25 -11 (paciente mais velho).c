#include <stdio.h>
int main (){
    int total_pacientes, idade, mais_velho = 0, i;
    printf("Numero de pacientes: ");
    scanf("%d", &total_pacientes);
    for (i = 1; i <= total_pacientes; i++) {
        printf("Idade  do %d° paciente: ", i);
        scanf("%d", &idade);
        if (idade > mais_velho) {
            mais_velho = idade;
        }
    }
printf("A idade do paciente mais velho é %d anos.\n", mais_velho);
return 0;
}