

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i;
    int tamanho;
    
    char entrada[92];
    
    fgets(entrada,92,stdin);
    
    tamanho = strlen(entrada);
    
    printf("Tamanho %d\n",tamanho);

    return 0;
}