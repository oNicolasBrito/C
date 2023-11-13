#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main() {

int numero;

printf("digite um numero: \n");
scanf("%d", &numero);

if (numero % 2 == 0) {
   printf("par"); 
} else {
    printf("impar");
}




    return 0;
}