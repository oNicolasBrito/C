#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;
    int idades[5];
    char nomes[5][200];

    for (i = 0; i < 5; i++)
    {
        printf("Digite seu nome:\n");
        gets(nomes[i]);

        printf("Digite sua idade:\n");
        scanf("%d", &idades[i]);

        system("Cls || clear");
    }

    for (i = 0; i < 5; i++)
    {
        printf("%dº Nome: %s\n", i + 1, nomes[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%dº Idade : %d\n", i + 1, idades[i]);
    }

    getchar();

    return 0;
}