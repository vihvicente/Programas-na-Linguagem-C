#include <stdio.h>
#include <locale.h>

void main(){
    setlocale (LC_ALL, "Portuguese");
    int num;
    int resto;

    printf ("Digite um número inteiro: ");
    scanf("%d", &num);

    resto = num%2;

    if (resto == 0)
        printf ("O número %d é par", num);
    else
        printf("O número %d é impar", num);




}
