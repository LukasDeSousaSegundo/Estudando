#include <stdio.h>

int main()
{
    int vet[10];
    int i;
    
    for(i = 0 ; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }
    printf("\n");
    for(i = 0 ; i < 10; i++)
    {
        if(vet[i] <= 20)
        {
            printf("%d\n", vet[i]);
        }
    }
    return 0;
}