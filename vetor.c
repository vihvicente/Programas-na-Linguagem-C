#include <stdio.h>
#include <locale.h>

void main(){
    setlocale (LC_ALL, "Portuguese");

    //Declara��o de Array unidimensional (Vetor)
    int i, xpto[5];


    //Entrada de dados no Array
    for (i=0; i<5; i++){
        printf("Digite um valor: ");
        scanf("%d", &xpto[i]);
    }

    //Apresenta��o dos dados da Array
    printf("      Valores Digitados    ");
    for (i=0;i<5;i++){
        printf("\nValor %d ", xpto[i]);
    }




}

