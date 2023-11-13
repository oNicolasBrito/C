#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
 {
    setlocale(LC_ALL,"portuguese");
    int codigodoprato;

    printf("Digite o codigo do prato");
    scanf("%d",&codigodoprato);

    switch(codigodoprato){
    case 1:
    printf("picanha preço 25,00");  
    break;
    case 2:
    printf("lasanha preço 20,00");
    break;
    case 3:
    printf("strogonoff preço 18,00");
    break;
    case 4:
    printf("bife acebolado preço 15,00");
    break;
    case 5:
    printf("pão com ovo preço 5,00");
    break;
    }
    return 0;
 }
     

