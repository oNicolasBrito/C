#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main () {

setlocale(LC_ALL, "portuguese");

float numeros[3];
int i;
int final;
float media;

for (i=0; i < 3; i++) {
    printf("Escreva o %d� n�mero:", i+1);
    scanf("%f", &numeros[i]);
}

system("clear || cls");

printf("Exibindo os n�meros...");
sleep(5);

system("Clear || cls");

media = numeros[1,2,3] / 3;

printf("M�dia:%2.f", media);

    return 0;
}