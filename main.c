#include <stdio.h>

int main()
{
    int vet[5];
    int i;
    
    for(i = 0 ; i < 5; i++)
    {
        scanf("%d", &vet[i]);
    }
    printf("\n");
    for(i = 0 ; i < 5; i++)
    {
        if(vet[i] <= 8)
        {
            printf("%d\n", vet[i]);
        }
    }
    return 0;
}