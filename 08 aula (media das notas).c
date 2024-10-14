#include<stdio.h>
#include<math.h>

int main(){
    int n1;
    int n2;
    int n3;
    int n4;
    float media;

    printf("digite a nota numero 1:");
    scanf("%d", &n1);
    printf("digite a nota numero 2:");
    scanf("%d", &n2);
    printf("digite a nota  numero 3:");
    scanf("%d", &n3);
    printf("digite o a nota numero 4:");
    scanf("%d", &n4);
    
    media = (n1 + n2 + n3 + n4) /4;
    printf("%f\n", media);
    
    if (media >=7 ){
         printf("aluno aprovado");
    }
    if (media > 4 && media < 7){
        printf("aluno esta de exame final");
    }
    if(media < 4){
    printf("aluno reprovao");
    }
}