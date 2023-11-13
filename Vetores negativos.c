#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

setlocale(LC_ALL, "portuguese");

int numeros [10];
int negativos;
int somaPositivos = 0;
int i;

for (i = 0; i < 10; i ++) {

printf("Digite um número:\n");
scanf("%d", &numeros[i]);

if (numeros[i] < 0) {
    negativos += 1;
} else {
    somaPositivos += numeros[i];
}

system("Cls || clear");

}

    printf("Quantidade de numeros negativos:%d\n", negativos);
    printf("Soma dos positivos:%d\n", somaPositivos);

getchar();

    return 0;
}