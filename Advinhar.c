#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "portuguese");

int resposta;
int numeroCerto;



printf("Advinhe um n�mero de 0 � 10: \n");
scanf("%d", &resposta);


while (resposta != numeroCerto) {
system("cls || clear");
numeroCerto = (rand() % 100) * 0.1;
if (resposta > numeroCerto) {
    printf("tente um n�mero menor:\n");
    scanf("%d", &resposta);
} else if (resposta < numeroCerto){
    printf("tente um n�mero maior: \n");
    scanf("%d", &resposta);
}

}
system("cls || clear");
printf("Parab�ns! o n�mero � %d!", numeroCerto);


return 0;
}