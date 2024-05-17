#include <stdio.h>
#include <locale.h>

void main(){
    setlocale (LC_ALL, "Portuguese");

    int num[5], i, soma=0;

    for (i=0;i<5;i++){

        printf("Digite o %d número: ",i);
        scanf ("%d", &num[i]);
    }

    for (i=0;i<5;i++){
        soma = soma + num[i];
        printf ("Os números são: %d\n", num[i]);

    }
    printf("\nA soma dos números é: %d", soma);


}
