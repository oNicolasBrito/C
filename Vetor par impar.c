#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

int main () {

setlocale(LC_ALL, "portuguese");

int numeros [6];
int i;
int pares = 0;
int impares = 0;

for (i=0; i < 6; i ++) {
printf("Digite o %d� n�mero:\n", i + 1);
scanf("%d", &numeros[i]);
if (numeros[i] % 2 == 0) {
    pares ++;
} else {
    impares ++;
}
}

system("cls || clear");

printf("Carregando n�meros...");
sleep(5);

system("cls || clear");

printf("P�res:%d \n", pares);
printf("Imp�res:%d \n", impares);

getchar();

    return 0;
}