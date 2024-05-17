#include <stdio.h>
#include <locale.h>

void main(){
    setlocale (LC_ALL, "Portuguese");

    float salario, aumento, ajuste;

    printf("Digite seu salário: ");
    scanf ("%f", &salario);


    aumento = salario*0.30;
    ajuste = salario + aumento;


    if (salario <= 500 )
        printf("Seu novo salário com aumento é: %f", ajuste);
    else
        printf("Você não tem direito a aumento!");

}
