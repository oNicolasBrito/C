#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorDigito;

    printf("Digite um valor:");
    scanf("%d", &valorDigito);
    if (valorDigito == 10)
    {
        printf("IGUAL A DEZ!!!");
    }
    else if (valorDigito > 10)
    {
        printf("MAIOR QUE DEZ!!!");
    }
    else
    {
        printf("MENOR QUE DEZ!!!");
    }

    return 0;
}