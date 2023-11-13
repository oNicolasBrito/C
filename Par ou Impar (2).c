#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

setlocale(LC_ALL, "portuguese");

int i, par, impar, numero;

impar = 0;
par = 0;

for(i = 1; i <= 5; i++){
    printf("Digite um número:");
    scanf("%d", &numero);
    if ( numero % 2 == 0){
      par = (par + 1);  
    } else {
      impar = (impar + 1);
    }
}

printf("Pares %d \n", par);
printf("Impares %d \n", impar);





    return 0;
}