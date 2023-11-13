#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int dia;
    printf("Digite um numero");
    scanf("%d",&dia);
    switch(dia){
    case 1:
    printf("final de semana");
    break;
    case 2:
    printf("dia util");
    break;
    case 3:
    printf("dia util");
    break;
    case 4:
    printf("dia util");
    break;
    case 6:
    printf("dia util");
    break;
    case 7:
    printf("final de semana");
    break;
    }
    getchar();
    return 0;
}

   
    