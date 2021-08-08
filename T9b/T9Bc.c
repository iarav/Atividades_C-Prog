#include <stdio.h>

int i,N,x,y; //Váriavel Global i.

//Procedimento que verifica qual o menor e maior número do vetor.
void busca(int numeros[]){
    //Declarando váriaveis
    x = numeros[0];
    y = numeros[0];

    //Verificando qual o menor número
    for(i = 0; i < N; i ++)
        if(numeros[i]<x)
            x = numeros[i];
    //Verificando qual o maior número
    for(i = 0; i < N; i ++)
        if(numeros[i]>y)
            y = numeros[i];
}

int main(){
    
    scanf("%d",&N); //Escaneando tamanho do Vetor

    int numeros[N]; //Declarando Vetor

    for(i = 0; i < N; i++)
        scanf("%d",&numeros[i]); //Escaneando valores do vetor
    
    busca(numeros); //Chamando o procedimento busca

    printf("maior valor: %d\nmenor valor: %d\n",y,x);  //Imprimindo valores

    return 0;
}