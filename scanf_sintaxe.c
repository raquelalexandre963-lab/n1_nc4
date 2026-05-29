#include <stdio.h>

int main(){
    int idade;
    float altura;
    char letra;

    // Lendo um INT com %d
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Lendo um FLOAT com %f
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    // Lendo um CHAR com %c - repara no espaço antes
    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    // Mostrando tudo que leu
   
 printf("\nVoce digitou:\n");
printf("Idade: %d\n", idade);
printf("Altura: %.2f\n", altura);
printf("Letra: %c\n", letra);




    return 0;
}