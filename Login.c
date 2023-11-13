#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char usuarioRegistro[200] = "NyK";
    char senhaRegistro[200] = "1236";
    char usuarioLogin[200];
    char senhaLogin[200];

    printf("Digite seu usuário: \n");
    gets(usuarioLogin);

    printf("Digite sua senha: \n");
    gets(senhaLogin);

    if (strcmp(usuarioRegistro, usuarioLogin) == 0 && strcmp(senhaRegistro, senhaLogin) == 00)
    {
        system("cls || clear");
        printf("Bem vindo!");
    }
    else
    {
        system("cls || clear");
        printf("Usuário ou senha incorretos!");
    }

    getchar();

    return 0;
}