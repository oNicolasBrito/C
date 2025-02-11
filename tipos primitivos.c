#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade = 20;  //int = inteiro
    float peso = 80.2; //float = real
    char sexo = 'M'; //char = apenas um caracter. OBS: quanto houver apenas um caracter usar aspas simples(' '), caso contrario usar aspas normais (" ").
    char nome [70] = "Robnelson"; //char e [numero] = quantidade de caracteres desejada
//caso variavel for inteira, colocar %d/%i, ambos funcionam.
//caso variavel for real, colocar %float.
    printf("Idade: %d anos. \n", idade);  // o \n é pra pular um espaço
    printf("Peso: %.2f kg. \n", peso);
    printf("Sexo: %c. \n", sexo);
    printf("Nome: %s. \n", nome);
    return 0;
}