#include<stdio.h>
int main(){
int total_copias;
float custo;
printf("Digite o total de copias:");
scanf("%d", &total_copias);
if
(total_copias <= 100)
{
custo = total_copias *0.25;
} else {
    custo = total_copias *0.20;
}
printf("Total á ser pago357: R$ %.2f\n", custo);
return 0;
}