#include <stdio.h>

int i; //Váriavel Global i.

//Procedimento para armazenar o cubo de A em B:
void procedimento(int A[10], int B[10]){ 
    for(i = 0; i < 10; i++){
        B[i]=A[i]*A[i]*A[i];
    }
}

int main(){

    int A[10], B[10]; //Declaração dos vetores

    for(i = 0; i < 10; i++)
        scanf("%d",&A[i]); //Escaneando valores de A.
    
    procedimento(A,B);  // Executando o procedimento.

    for(i = 0; i < 10; i++)
        printf("%d\n",B[i]);  //Imprimindo valores de B calculados no procedimento.

    return 0;
}