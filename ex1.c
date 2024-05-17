#include <stdio.h>
#include <locale.h>


void main(){
    setlocale (LC_ALL, "Portuguese");
    int i, num[6];
    int quantPar = 0, quantImpar = 0;

    for (i=0;i<6;i++){

        printf("Digite o número: ");
        scanf("%d", &num[i]);
    }

    for (i=0;i<6;i++){

        if (num[i] % 2 == 0) {
            printf("\nO número %d é par\n", num[i]);
            quantPar = quantPar + 1;


        }else{
            printf("\nO número %d é ímpar\n", num[i]);
            quantImpar = quantImpar + 1;


        }
    }
    printf("\nQuantidade de números pares: %d\n", quantPar);
    printf("\nQuantidade de números ímpares: %d\n", quantImpar);





}
