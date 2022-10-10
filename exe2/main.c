#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[20];
    int par=0;
    int impar=0;
    int maior=0;
    int menor=0;

    for(int i=0;i<20;i++) {
        printf("V[%d]: ", i);
        scanf("%d", &vet[i]);
        if (vet[i]%2==0){
            par++;
        }
        if (vet[i]%2!=0){
            impar++;
        }
        if (vet[i]>50){
            maior++;
        }
        if (vet[i]<7){
            menor++;
        }
    }
    printf("Existem %d numeros pares no vetor.",par);
    printf("Existem %d numeros impares no vetor.",impar);
    printf("Existem %d numeros maiores que 50 no vetor.",maior);
    printf("Existem %d numeros menores que 7 no vetor.",menor);

    return 0;
}
