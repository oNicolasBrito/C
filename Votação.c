#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

int idade;

printf("Qual sua idade? \n");
scanf("%d", &idade);

system("cls || clear");

if (idade < 18 || idade > 65) {
printf("Não é obrigado a votar!");
} else {
printf("É obrigado a votar!");    
}

getchar();
    return 0;
}