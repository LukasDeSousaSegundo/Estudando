#include <stdio.h>

int main()
{
    int vet[10];
    int i;
    
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }
    
    for(i = 0; i < 10; i++)
    {
        if(vet[i] > 0 && vet[i] < 50)
        {
            printf("%d\n", vet[i]);
        }
    }
    
    return 0;
}