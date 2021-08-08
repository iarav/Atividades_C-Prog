

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 5

int processa(int* A, int* B){
    int resultado[TAM];
    int i;
    
    for(i=0;i<TAM;i++){
        resultado[i] = A[i] * B[i];
    }
    
    return resultado;
}

int main()
{
   int i;
    int A[TAM];
    int B[TAM];
    int resultado[TAM];
    
    resultado = processa(A,B);
    
    for(i=0;i<TAM;i++){
        printf("%d",resultado[i]);
    }
    
    
    return 0;
}
