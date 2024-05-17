#include <stdio.h>

void main(){
    float num;

    /*
    short int = pouco espaço
    int = padrão
    long int = muito espaço
    unsigned = sem sinal (pode mesclar com os outros tipos. Ex: unsigned short int)

    - Uma variavel é nada mais que o nome que damos a uma determinada posição de memória para conter um valor de um determinado tipo
    - A declaração de vaiáveis tem que ser sempre realizada antes de sua utilização e antes de qualquer instrução
    - A representação de caracteres em C faz-se utilizando apóstrofos (' ') e não aspas (" ")

    */

    printf("Digite um numero: ");
    scanf("%f", &num);

    printf("Valor digitado: %f", num);

}
