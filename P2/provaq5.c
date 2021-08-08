

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
    
    /*printf("Caracteres:");
    for(i=0;i<tamanho;i++){
        if(i%2!=0)
            printf("%c",entrada[i]);
    }*/
    
    printf("Caracteres:");
    for(i=1;i<tamanho;i+=2){
        printf("%c",entrada[i]);
    }
    
    return 0;
}
