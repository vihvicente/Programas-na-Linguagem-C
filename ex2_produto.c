#include <stdio.h>
#include <locale.h>


void main(){
    setlocale (LC_ALL, "Portuguese");

    float preco, aumento, novoPreco;

    printf("Digite o pre�o do produto: ");
    scanf ("%f", &preco);


    //Percentual de aumento

    if (preco < 50){
        aumento = preco * 0.05;

    }else if(preco > 50 && preco <100){
        aumento = preco * 0.10;

    }else{
        aumento = preco * 0.15;

    }


    //Classifica��es
    novoPreco = aumento + preco;

    if (novoPreco < 80){
        printf("Pre�o: %f", novoPreco);
        printf("\nClassifica��o: Barato");

    } else if(novoPreco > 80 && novoPreco <= 120){
        printf("Pre�o: %f", novoPreco);
        printf("\nClassifica��o: Normal");

    } else if (novoPreco > 120 && novoPreco <= 200){
        printf("Pre�o: %f", novoPreco);
        printf("\nClassifica��o: Caro");

    } else {
        printf("Pre�o com o aumento: %f", novoPreco);
        printf("\nClassifica��o: Muito Caro");
    }


}
