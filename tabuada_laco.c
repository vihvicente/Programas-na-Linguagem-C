#include <stdio.h>
#include <locale.h>

void main(){
    setlocale (LC_ALL, "Portuguese");
    int num, mult, i;

    printf("Digite o número da tabuada: ");
    scanf ("%d", &num);

    for (i=1; i<=11; i++){
        if (i==11)
            break;
        mult = num * i;
        printf ("\n%d x %d = %d", num, i, mult);
    }

}
