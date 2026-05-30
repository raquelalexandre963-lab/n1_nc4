#include <stdio.h>

int main(){
int idade, matricula;
float altura;
char nome[50];

printf("digite a sua idade: \n");
scanf("%d", &idade);

printf("digite a sua altura: \n");
scanf("%f", &altura);

printf("digite o seu nome: \n");
scanf(" %s", nome);

printf("digite a sua matricula \n");
scanf("%d", &matricula);

printf("nome do aluno: %s - Matricula: %d\n", nome, matricula);
printf("idade: %d -Altura: %.2f\n", idade, altura);

return 0;
}