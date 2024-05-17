#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    char estado;

    printf("Digite seu estado civil Casado(c), Divorciado(d), Solteiro(s) ou Vi�vo(v): ");
    scanf("%c", &estado);


    /* ESTRUTURA CASE
    Em alguns programas, existem situa��es mutualmente exclusivas, isto �, se uma situa��o for executada, as demais n�o ser�o.
    A instru��o switch adapta-se particularmente a tomada de decis�es em que um n�mero de possibilidades � elevado (Em geral maior que 2, se n�o usa-se If - else),
    de forma a reduzir a complexidade do if-else consecutivos e encadeados
    */

    switch(estado){
        case 'c': printf("Casado");
            break;
        case 'd': printf("Divorciado");
            break;
        case 's': printf("Solteiro");
            break;
        case 'v': printf("Vi�vo");
            break;
        default: printf("Estado civil n�o identificado");
    }
}
