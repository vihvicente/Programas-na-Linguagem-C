#include <stdio.h>
void main(){
    // Declara��o de Vari�veis
    int xpto,xpto1,resultado;
    float xpto2;
    double xpto3;
    char xpto4;

    // INT
    // Inser��o e leitura de dados inteiros
    printf("Digite um numero inteiro: ");
    scanf("%d",&xpto);

    printf("Digite outro numero inteiro: ");
    scanf("%d",&xpto1);

    //%d = c�digo de formata��o para inteiro
    //resultado = xpto + xpto1;
    printf("A soma e: %d\n",xpto+xpto1);



    // FLOAT
    // Inser��o e leitura de dados reais
    printf("Digite um numero real: ");

    //%f = c�digo de formata��o para float
    scanf("%f", &xpto2);
    // .2 = para definir quantidade de casas decimais
    printf("Valor digitado: %.2f\n",xpto2);



    // DOUBLE
    // Inser��o e leitura de dados reais
    printf("Digite um numero real: ");

    //%lf = c�digo de formata��o para double
    scanf("%lf", &xpto3);
    printf("Valor digitado: %.2lf\n",xpto3);



    // CHAR
    // Inser��o e leitura de dados reais
    printf("Digite um caracter0: ");

    //%c = c�digo de formata��o para char
    scanf("%c",&xpto4);
    printf("Valor %c foi digitado: ",xpto4);




}
