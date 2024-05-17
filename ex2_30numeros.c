#include <stdio.h>
#include <locale.h>

void main(){
    setlocale (LC_ALL, "Portuguese");

    int i, num[15];

    for (i=0;i<15;i++){

        printf("Digite o %d elemento: ", i);
        scanf("%d", &num[i]);
    }

    for (i=0;i<15;i++){
        if (num[i] == 30){
            printf("\n%d = Elemento igual a 30 na posição %d", num[i], i);
        }else{
            printf("\n%d = Elemento diferente de 30", num[i]);
        }

    }




}


