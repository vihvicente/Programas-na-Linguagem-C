#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    char estado;

    printf("Digite seu estado civil Casado(c), Divorciado(d), Solteiro(s) ou Viúvo(v): ");
    scanf("%c", &estado);


    /* ESTRUTURA CASE
    Em alguns programas, existem situações mutualmente exclusivas, isto é, se uma situação for executada, as demais não serão.
    A instrução switch adapta-se particularmente a tomada de decisões em que um número de possibilidades é elevado (Em geral maior que 2, se não usa-se If - else),
    de forma a reduzir a complexidade do if-else consecutivos e encadeados
    */

    switch(estado){
        case 'c': printf("Casado");
            break;
        case 'd': printf("Divorciado");
            break;
        case 's': printf("Solteiro");
            break;
        case 'v': printf("Viúvo");
            break;
        default: printf("Estado civil não identificado");
    }
}
