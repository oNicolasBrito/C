#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "portuguese");

int i;
int numeeo;
int soma;

soma = 0;

for(i = 1; i <= 5; i++){
    printf("Digite um numero:");
    scanf("%d", &numeeo);
    soma += numeeo;
}

printf("Total: \n %d", soma);








  return 0;  
}