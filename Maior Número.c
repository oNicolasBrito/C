#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numeroPrimeiro;
    int numeroSegundo;
    int numeroTerceiro;
    int numeroMaior;
    int numeroMenor;

    printf("escreva o primeiro número: \n");
    scanf("%d", &numeroPrimeiro);

    printf("escreva o segundo número: \n");
    scanf("%d", &numeroSegundo);

    printf("escreva o terceiro número: \n");
    scanf("%d", &numeroTerceiro);

    system("cls || clear");

    if (numeroPrimeiro > numeroSegundo && numeroPrimeiro > numeroTerceiro)
    {
        numeroMaior = numeroPrimeiro;
    }
    else if (numeroSegundo > numeroPrimeiro && numeroSegundo > numeroTerceiro)
    {
        numeroMaior = numeroSegundo;
    }
    else if (numeroTerceiro > numeroPrimeiro && numeroTerceiro > numeroSegundo)
    {
        numeroMaior = numeroTerceiro;
    }
    else
        ;

    if (numeroPrimeiro < numeroSegundo && numeroPrimeiro < numeroTerceiro)
    {
        numeroMenor = numeroPrimeiro;
    }
    else if (numeroSegundo < numeroPrimeiro && numeroSegundo < numeroTerceiro)
    {
        numeroMenor = numeroSegundo;
    }
    else if (numeroTerceiro < numeroPrimeiro && numeroTerceiro < numeroSegundo)
    {
        numeroMenor = numeroTerceiro;
    }
    else
        ;

    printf("Maior numero: %d \n", numeroMaior);
    printf("Menor numero: %d \n", numeroMenor);

getchar ();
    return 0;
}