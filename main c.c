#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero,i;
    int binario[32];

    printf("Digite um numero decimal:");
    scanf("%d",&numero);

    if(numero==0){
        printf("Numero binario: 0\n");
    }
    else{
        for(i=0;numero>0;i++){
            binario[i]= numero%2;
            numero = numero/2;
        }
        printf("Numero binario:");
        for(i=i;i>=0;i--){
            printf("%d",binario[i]);
        }
        printf("\n");
    }
    return 0;


}
