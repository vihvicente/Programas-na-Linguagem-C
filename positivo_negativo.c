#include <stdio.h>
#include <locale.h>

void main(){
    setlocale (LC_ALL, "Portuguese");
    int num;

    printf ("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    // Condicional simples = Apenas uma instru��o
    // Condicional Composto (If e Else) = Mais de uma instru��o
    if (num > 0)
        printf ("O n�mero %d � positivo", num);
    else
        printf("O n�mero %d � negativo", num);

}
