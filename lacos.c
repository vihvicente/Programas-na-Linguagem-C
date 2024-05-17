#include <stdio.h>
#include <locale.h>

void main(){
    setlocale (LC_ALL, "Portuguese");
    int a, cont=0;

    printf("    Laço For   ");
    for (a=1; a<=20; a++){
        if (a==10)
            break;
        printf ("\no valor de a é : %d", a);

    }


    printf("\n\n    Laço While     ");

    while (cont<10){
        printf("\n O valor de cont:%d", cont);
        cont++;
    }
    printf("\n\nValor de cont depois do laco");
    printf("\n O valor de cont: %d",cont);


    printf("\n\n     Laço Do While     ");
    cont = 0;
    do{
        printf("\n Valor de cont laço do/while: %d", cont);
        cont++;
    }while (cont<10);
    return;
}
