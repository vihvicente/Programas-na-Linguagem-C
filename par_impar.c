#include <stdio.h>
#include <locale.h>

void main(){
    setlocale (LC_ALL, "Portuguese");
    int num;
    int resto;

    printf ("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    resto = num%2;

    if (resto == 0)
        printf ("O n�mero %d � par", num);
    else
        printf("O n�mero %d � impar", num);




}
