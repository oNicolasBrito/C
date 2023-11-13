#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

 setlocale(LC_ALL, "portuguese");

int numeroPrimeiro;
int numeroSegundo;
int soma; 
float media;
int produto;

printf("digite o primeiro numero:");
scanf("%d", &numeroPrimeiro);

printf("digite o segundo numero:");
scanf("%d", &numeroSegundo);

soma = (numeroPrimeiro + numeroSegundo);
media = (numeroPrimeiro + numeroSegundo) / 2;
produto = (numeroPrimeiro * numeroSegundo); 

system("cls || clear");

Printf("Primeiro Numero: %d \n", numeroPrimeiro);
Printf("Segundo Numero: %d \n", numeroSegundo);
printf("Soma: %d \n", soma);
printf("Média: %.1f \n", media);
printf("Produto: %d \n", produto);

if (numeroPrimeiro > numeroSegundo) {
printf("Maior Numero: %d \n", numeroPrimeiro);
printf("Menor Numero: %d \n", numeroSegundo);
} else {
printf("Maior Numero: %d \n", numeroSegundo);
printf("Menor Numero: %d \n", numeroPrimeiro);
}
   system("pause");
   return 0;
}