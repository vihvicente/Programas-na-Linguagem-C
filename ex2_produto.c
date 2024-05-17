#include <stdio.h>
#include <locale.h>


void main(){
    setlocale (LC_ALL, "Portuguese");

    float preco, aumento, novoPreco;

    printf("Digite o preço do produto: ");
    scanf ("%f", &preco);


    //Percentual de aumento

    if (preco < 50){
        aumento = preco * 0.05;

    }else if(preco > 50 && preco <100){
        aumento = preco * 0.10;

    }else{
        aumento = preco * 0.15;

    }


    //Classificações
    novoPreco = aumento + preco;

    if (novoPreco < 80){
        printf("Preço: %f", novoPreco);
        printf("\nClassificação: Barato");

    } else if(novoPreco > 80 && novoPreco <= 120){
        printf("Preço: %f", novoPreco);
        printf("\nClassificação: Normal");

    } else if (novoPreco > 120 && novoPreco <= 200){
        printf("Preço: %f", novoPreco);
        printf("\nClassificação: Caro");

    } else {
        printf("Preço com o aumento: %f", novoPreco);
        printf("\nClassificação: Muito Caro");
    }


}
