#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {

 setlocale(LC_ALL, "portuguese");

float precoUnitario;
int quantidade;
float precoFinal;

printf("Quantas maçãs deseja comprar? \n");
scanf("%d", &quantidade);

/*if (quantidade < 12) {
precoUnitario = 1.30;
} else {
precoUnitario = 1.00;
}
*/

precoUnitario = quantidade < 12 ? 1.30 : 1.00;


precoFinal = quantidade * precoUnitario;

system("Cls || Clear");

printf("Quantidade: %d \n", quantidade);
printf("Preço unitario: %.2f \n", precoUnitario);
printf("Preço total: %.2f \n", precoFinal);

system("pause");

    return 0;
}