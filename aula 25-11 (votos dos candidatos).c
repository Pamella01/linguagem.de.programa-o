#include<stdio.h>
int main() {
int total_eleitores, votos_a = 0, votos_b = 0, votos_c = 0, i;
char voto;
printf("Total de eleitores: ");
scanf("%d", &total_eleitores);
for (i = 1; i <= total_eleitores; i++) {
    printf("Voto do %d° eleitor (A, B ou C): ", i);
    scanf(" %c", &voto);
    if (voto == 'A' || voto == 'a'){
        votos_a++;        
    } else if (voto == 'B' || voto == 'b'){
        votos_b++;
    } else if (voto == 'C' || voto == 'c'){
        votos_c++;
    } else {
        printf("Voto invalido!\n");
    }
}
printf("Candidato A: %d votos\n", votos_a);
printf("Candidato B: %d votos\n", votos_b);
printf("Candidato C: %d votos\n", votos_c);
return 0;
}