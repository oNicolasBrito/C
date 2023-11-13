#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    int anodenascimento;
    int tempodeTrabalho;
    int codigodoEmpregado;
    int idade;
    printf("Digite seu ano de nascimento\n");
    scanf("%d", &anodenascimento);
    printf("Digite quantos anos trabalhou nessa empresa");
    scanf("%d", &tempodeTrabalho);
    printf("Digite um seu codigo de trabalhador");
    scanf("%d", &codigodoEmpregado);
    
    idade = 2023 - anodenascimento;
     
    if (idade >= 65 || tempodeTrabalho >= 30)
        printf("\nRequerer aposentadoria");
    else
        printf("\nNão requerer aposentadoria");
        
    printf("\nCodigo:%d/n", codigodoEmpregado);
    printf("\nTempodeTrabalho:%d\n", tempodeTrabalho);
    printf("\nanodenascimento:%d\n", anodenascimento);
    getchar(); // pausa no windows e linux
    return 0;
}
