#include <stdio.h>

int main(){
    int idade = 25;
    int quantidade = 10;
    float altura = 1.75;
    char letra = 'A';
    char nome[20] = "Maria";

    printf("Olá Mundo!\n");
    printf("Idade: %d\n", idade);

    printf("%f\n", altura); // Agora tá DENTRO do main
    printf("%.1f\n", altura);
    printf("%.2f\n", altura);
    printf("%.3f\n", altura);

    return 0; // return sempre por último
} // <-- Fecha o main AQUI, depois de tudo