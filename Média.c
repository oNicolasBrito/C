#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float primeiraNota;
    float segundaNota;
    float media;
    char resultado[200];

    printf("Digite a primeira nota:");
    scanf("%f", &primeiraNota);

    printf("Digite a segunda nota:");
    scanf("%f", &segundaNota);

    system("cls || clear");

    media = (primeiraNota + segundaNota) / 2;

if (media >= 7) {
    strcpy(resultado, "Aprovado!");
    }
    else {
    strpcy(resultado, "Reprovado!");
    }

    printf("Primeira nota: %.2f \n", primeiraNota);
    printf("Segunda nota: %.2f \n", segundaNota);
    printf("Média: %.2f \n", media);
    printf("Resultado: %s \n", resultado);

    return 0;
}