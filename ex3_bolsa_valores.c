#include <stdio.h>
#include <locale.h>


void main(){
    setlocale(LC_ALL, "Portuguese");

    char tipo;
    float precoCompra, precoVenda, lucro, lucroTotal;
    int quantLucroInf, quantLucroSup;

    while (tipo != "F"){
        printf("Digite o tipo de a��o: ");
        scanf ("%c", &tipo);

        printf("Digite o pre�o de compra: ");
        scanf("%f", &precoCompra);

        printf("Digite o pre�o de venda: ");
        scanf("%f", &precoVenda);



        lucro = precoVenda - precoCompra;
        lucroTotal = lucroTotal + lucro;

        if (lucro >= 1000,00){
            quantLucroSup = quantLucroSup + 1;
        }else if (lucro <= 200,00){
            quantLucroInf = quantLucroInf + 1 ;
        }

        printf("\nO lucro da a��o %c foi: %f", tipo, lucro);
        printf("\nA quantidade de a��es com lucro superior a R$1000,00 foi: %d", quantLucroSup);
        printf("\nA quantidade de a��es com lucro inferior a R$200,00 foi: %d", quantLucroInf);
        printf("\nO lucro total da empresa foi: %f ", lucroTotal);

}















}
