#include <stdio.h>
void main(){
    // Declaração de Variáveis
    int xpto,xpto1,resultado;
    float xpto2;
    double xpto3;
    char xpto4;

    // INT
    // Inserção e leitura de dados inteiros
    printf("Digite um numero inteiro: ");
    scanf("%d",&xpto);

    printf("Digite outro numero inteiro: ");
    scanf("%d",&xpto1);

    //%d = código de formatação para inteiro
    //resultado = xpto + xpto1;
    printf("A soma e: %d\n",xpto+xpto1);



    // FLOAT
    // Inserção e leitura de dados reais
    printf("Digite um numero real: ");

    //%f = código de formatação para float
    scanf("%f", &xpto2);
    // .2 = para definir quantidade de casas decimais
    printf("Valor digitado: %.2f\n",xpto2);



    // DOUBLE
    // Inserção e leitura de dados reais
    printf("Digite um numero real: ");

    //%lf = código de formatação para double
    scanf("%lf", &xpto3);
    printf("Valor digitado: %.2lf\n",xpto3);



    // CHAR
    // Inserção e leitura de dados reais
    printf("Digite um caracter0: ");

    //%c = código de formatação para char
    scanf("%c",&xpto4);
    printf("Valor %c foi digitado: ",xpto4);




}
