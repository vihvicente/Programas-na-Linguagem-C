#include <stdio.h>
#include <locale.h>

void main(){
    setlocale (LC_ALL, "Portuguese");

    int num1;
    int num2;
    int maior;
    int menor;

    printf("Digite o primeiro número: ");
    scanf ("%d", &num1);

    printf("Digite o segundo número: ");
    scanf ("%d", &num2);

    if (num1 > num2)
        maior =  num1;
    else
        maior = num2;

    if (num1 < num2)
        menor =  num1;
    else
        menor = num2;


    printf("Menor: %d\n", menor);
    printf("Maior: %d", maior);





}
