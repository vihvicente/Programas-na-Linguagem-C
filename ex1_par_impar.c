#include <stdio.h>
#include <locale.h>


void main(){
    setlocale (LC_ALL, "Portuguese");
    int i, num[6];
    int quantPar = 0, quantImpar = 0;

    for (i=0;i<6;i++){

        printf("Digite o n�mero: ");
        scanf("%d", &num[i]);
    }

    for (i=0;i<6;i++){

        if (num[i] % 2 == 0) {
            printf("\nO n�mero %d � par\n", num[i]);
            quantPar = quantPar + 1;


        }else{
            printf("\nO n�mero %d � �mpar\n", num[i]);
            quantImpar = quantImpar + 1;


        }
    }
    printf("\nQuantidade de n�meros pares: %d\n", quantPar);
    printf("\nQuantidade de n�meros �mpares: %d\n", quantImpar);





}
