#include <stdio.h>

void main(){
    int num1, num2, soma, sub, mult, div;

    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);

    printf("Digite o segundo numero: ");
    scanf("%d",&num2);

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    resto = num1%num2;

    printf("A soma dos numeros e %d\n",soma);
    printf("A subtracao dos numeros e %d\n",sub);
    printf("A multiplicacao dos numeros e %d\n",mult);
    printf("A divisao dos numeros e %d",div);
    printf("O resto da divisão dos numeros e %d",resto);



}
