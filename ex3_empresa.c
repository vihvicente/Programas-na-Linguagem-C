#include <stdio.h>
#include <locale.h>

void main(){
    setlocale (LC_ALL, "Portuguese");

    float salario, aumento, ajuste;

    printf("Digite seu sal�rio: ");
    scanf ("%f", &salario);


    aumento = salario*0.30;
    ajuste = salario + aumento;


    if (salario <= 500 )
        printf("Seu novo sal�rio com aumento �: %f", ajuste);
    else
        printf("Voc� n�o tem direito a aumento!");

}
