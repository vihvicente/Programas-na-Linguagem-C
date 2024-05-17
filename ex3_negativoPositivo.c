#include <stdio.h>
#include <locale.h>


void main(){
    setlocale (LC_ALL, "Portuguese");

    float num[10], somaPosi;
    int i, negativos;

    for (i=0;i<10;i++){

        printf("Digite o %dº número: ", i);
        scanf("%f", &num[i]);
    }

    for (i=0;i<10;i++){
        if (num[i] < 0){
            negativos = negativos + 1;
        }else{
            somaPosi = somaPosi + num[i];
        }
    }

    printf ("A quantidade de números negativos é: %d\n", negativos);
    printf("A soma dos números positivos é: %.2f", somaPosi);

}

