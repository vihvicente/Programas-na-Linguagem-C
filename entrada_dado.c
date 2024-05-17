#include <stdio.h>

void main(){
    float num;

    /*
    short int = pouco espa�o
    int = padr�o
    long int = muito espa�o
    unsigned = sem sinal (pode mesclar com os outros tipos. Ex: unsigned short int)

    - Uma variavel � nada mais que o nome que damos a uma determinada posi��o de mem�ria para conter um valor de um determinado tipo
    - A declara��o de vai�veis tem que ser sempre realizada antes de sua utiliza��o e antes de qualquer instru��o
    - A representa��o de caracteres em C faz-se utilizando ap�strofos (' ') e n�o aspas (" ")

    */

    printf("Digite um numero: ");
    scanf("%f", &num);

    printf("Valor digitado: %f", num);

}
