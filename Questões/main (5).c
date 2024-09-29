#include <stdio.h>

int main() 
{
    int n1, n2;
    int i;
    
    printf("Escreva dois valores:\n");
    scanf("%d %d", &n1, &n2);
    
    if(n1 > n2)
    {
        int aux;
        
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    
    for(i = n1; i <= n2; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}