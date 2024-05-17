#include <stdio.h>
#include <locale.h>

void main(){
    setlocale (LC_ALL, "Portuguese");

    int nota1, nota2, nota3, nota4, media;

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%d", &nota4);

    media = (nota1+nota2+nota3+nota4)/4;

    if (media >= 7)
        printf("Aprovado com média: %d", media);
    else
        printf("Reprovado com média: %d", media);


}
