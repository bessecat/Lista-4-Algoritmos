#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vet1[8];
    int vet2[8];


    for(int i=0;i<8;i++) {
        printf("Vet 1 [%d]: ", i);
        scanf("%d", &vet1[i]);
    }

    for(int j=0;j<8;j++) {
        vet2[j]=vet1[j]*2;
        printf("Vet 2 [%d] -> %d\n",j,vet2[j]);
    }

    return 0;
}
