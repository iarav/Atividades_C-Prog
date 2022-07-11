

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    
    printf("Digite n:");
    scanf("%d",&n);
    
    if(n>0)
        printf("Valor calculado: %.5f\n",funcao(n));
    else
        printf("Valor Invalido\n");

    return 0;
}

float funcao(int x){
    float res = 1.0;
    int i;
    
    for(i=x;i>1;i--)
        res = res+1;
    return res;
}
