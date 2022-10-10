#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetorA[10], aux, min;
    int j = 0;
    int i = 0;

    for(int i = 0; i < 10; i++)
    {
        printf("Insira o valor do vetor A [%d]: \n", i);
        scanf("%d", &vetorA[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        min = i;

        for(int j = i + 1; j < 10; j++)
        {
            if(vetorA[min] > vetorA[j])
            {
                min = j;
            }
            aux = vetorA[i];
            vetorA[i] = vetorA[min];
            vetorA[min] = aux;
        }
    }

    printf("Vetor Ordenado: ");
    do
    {
        if(i < 9)
        {
            printf("%d, ", vetorA[i]);
            i++;
        }
        else{
            printf("%d.", vetorA[i]);
            i++;
        }

    }
    while(i < 10);

    return 0;
}
