#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Declarando váriaveis
    int grau,i;
    float x, resposta = 0;
    float* coeficiente;

    //Escaneando o grau da função.
    scanf("%d",&grau);

    grau = grau + 1; //Somando 1 para que considere o x^0;

    //Definindo o tamanho do vetor coeficiente (Que será do tamanho grau)
    coeficiente = (float *) malloc(grau*sizeof(float)); 

    if(coeficiente == NULL){ //Verificando disponibilidade de espaço
        printf("Memória Insuficiente");
        return 1;
    }

    for(i = 0; i < grau; i++){
        scanf("%f",&coeficiente[i]); //Escaneando os vetores
    }

    scanf("%f",&x); //Escanendo x

    for(i = 0; i < grau; i++){
        resposta += coeficiente[i] * pow(x,i); //Calculando resultado da função
    }

    printf("%.2f\n",resposta); //Imprimindo a resposta

    free(coeficiente);

    return 0;
}