#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "portuguese");

int resposta;
int numeroFamilias = 0;
int contadorSalario = 0;
int somaSalario = 0;
int contadorFilhos = 0;
int somaFilhos = 0;
float salario;
int filhos;
float mSalario;
float mFilhos;
float maiorSalario = 0;
float menorSalario = 150;

printf("Código        //        Descrição\n");
printf("   \n");
printf("   1          //       Adicionar Familia\n");
printf("   2          //   Sair e exibir resultados\n");
scanf("%d", &resposta);

while (resposta != 2) {
    
numeroFamilias += 1;

system("cls || clear");

printf("Qual seu salário?:\n");
scanf("%f", &salario);
contadorSalario ++;
somaSalario = (somaSalario + salario);

if (salario > maiorSalario)
        {
            maiorSalario = salario;
        }
        else if (salario < menorSalario)
        {
            menorSalario = salario;
        }

printf("Quantos filhos você tem?: \n");
scanf("%d", &filhos);
contadorFilhos ++;
somaFilhos = (somaFilhos + filhos);

mSalario = somaSalario / contadorSalario;
mFilhos = somaFilhos / contadorFilhos;

system("cls || clear");

printf("Código        //        Descrição\n");
printf("   \n");
printf("   1          //       Adicionar Familia\n");
printf("   2          //   Sair e exibir resultados\n");
scanf("%d", &resposta);
}

system("cls || clear");



printf("Total de familias que responderam a pesquisa:%d \n", numeroFamilias);
printf("Média de salário da população: %3.f \n", mSalario);
printf("Média de número dos filhos: %3.f \n", mFilhos);
printf("Maior salário:%2.f \n", maiorSalario);
printf("Menor salário:%2.f \n", menorSalario);

getchar();
    return 0;
}