

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void processaVetor(int* vet){
    int i;
    
    for(i =0; i<3;i++)
        scanf("%d",&vet[i]);
}

int main()
{
    int vet[3];
    processaVetor(vet);
    
    printf("%d",vet[0]);
  return 0;
}

