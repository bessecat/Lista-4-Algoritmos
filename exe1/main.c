#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet1[10];
    int vet2[10];
    int vetr[10];

    for(int i=0;i<10;i++) {
        printf("V[%d]: ", i);
        scanf("%d", &vet1[i]);
    }

    for(int j=0;j<10;j++) {
        printf("V[%d]: ", j);
        scanf("%d", &vet2[j]);
    }

    for(int k=0;k<10;k++) {
        vetr[k]=vet1[k]+vet2[k];
        printf("V[%d]: ", vetr[k]);
    }


    return 0;
}
