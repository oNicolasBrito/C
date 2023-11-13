#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "portuguese");

int resposta;
int numeroCerto;



printf("Advinhe um número de 0 á 10: \n");
scanf("%d", &resposta);


while (resposta != numeroCerto) {
system("cls || clear");
numeroCerto = (rand() % 100) * 0.1;
if (resposta > numeroCerto) {
    printf("tente um número menor:\n");
    scanf("%d", &resposta);
} else if (resposta < numeroCerto){
    printf("tente um número maior: \n");
    scanf("%d", &resposta);
}

}
system("cls || clear");
printf("Parabéns! o número é %d!", numeroCerto);


return 0;
}