#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int contadormSalario;
    int somamSalario = 0;
    int idade;
    char sexo;
    float salario;
    float mSalario;
    int resposta;
    int maiorIdade = 0;
    int menorIdade = 150;
    int quantidadeF = 0;

    printf("Código        //        Descrição\n");
    printf("   \n");
    printf("   1          //       Adicionar Pessoa\n");
    printf("   2          //   Sair e exibir resultados\n");
    scanf("%d", &resposta);

    while (resposta != 2)
    {
        system("Cls || clear");
        printf("Digite sua idade:\n");
        scanf("%d", &idade);

        if (idade > maiorIdade)
        {
            maiorIdade = idade;
        }
        else if (idade < menorIdade)
        {
            menorIdade = idade;
        }

        fflush(stdin);

        printf("Digite seu sexo:\n");
        scanf("%c", &sexo);

        printf("Digite seu salário:\n");
        scanf("%f", &salario);

        contadormSalario++;
        somamSalario = somamSalario + salario;
        mSalario = (somamSalario / contadormSalario);

        system("Cls || clear");

        printf("Código        //        Descrição\n");
        printf("   \n");
        printf("   1          //       Adicionar Pessoa\n");
        printf("   2          //   Sair e exibir resultados\n");
        scanf("%d", &resposta);

        if (sexo == 'f' && salario >= 5000)
        {
            quantidadeF += 1;
        }
        else
        {
        }
    }

    system("Clear || cls");

    printf("Média de salário do grupo:%3.f \n", mSalario);
    printf("Maior Idade:%d \n", maiorIdade);
    printf("Menor Idade:%d \n", menorIdade);
    printf("Quantidade de mulheres com salário a partir de R$5.000,00: %d \n", quantidadeF);
    getchar();
    return 0;
}