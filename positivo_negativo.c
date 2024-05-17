#include <stdio.h>
#include <locale.h>

void main(){
    setlocale (LC_ALL, "Portuguese");
    int num;

    printf ("Digite um número inteiro: ");
    scanf("%d", &num);

    // Condicional simples = Apenas uma instrução
    // Condicional Composto (If e Else) = Mais de uma instrução
    if (num > 0)
        printf ("O número %d é positivo", num);
    else
        printf("O número %d é negativo", num);

}
