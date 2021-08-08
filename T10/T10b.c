#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declarando váriaveis
    int** matriz; //Matriz dinamica
    int** transposta; //Matriz transposta dinâmica
    int l,c,i,j, cont=0;

    scanf("%d %d",&l,&c); //Lendo l(nº de linhas) e c(nº de colunas)

    matriz = (int**) malloc(l*sizeof(int*)); //Alocando as linhas
    transposta = (int**) malloc(c*sizeof(int*)); //Alocando as linhas

    for(i = 0; i < l; i++){
        matriz[i] = (int*) malloc(c*sizeof(int)); //Alocando as colunas
        transposta[i] = (int*) malloc(l*sizeof(int));//Alocando as colunas
    }

    for(i = 0; i < l; i++)
        for(j = 0; j < c; j++)
            scanf("%d",&matriz[i][j]); //Escaneando a matriz

    if(l == c){
        for(i = 0; i < l; i++)
            for(j = 0; j < c; j++)        
                transposta[j][i] = matriz[i][j]; //Criando a transposta

        for(i = 0; i < l; i++)
            for(j = 0; j < c; j++)
                if(transposta[i][j] == matriz[i][j])  //Verificando se elas são iguais
                    cont++; //Contador para ver quantos são iguais

        //Verificando se é simétrica
        if(cont == l*c){
            printf("Eh simetrica\n");
        }else{
            printf("Nao eh simetrica\n");
        }
    }else{
        printf("Nao eh simetrica\n");
    }

    for(i = 0; i < l; i++){
        free(matriz[i]);  //Liberando o espaço das colunas
        free(transposta[i]);//Liberando o espaço das colunas
    }

    free(matriz);  //Liberando o espaço das linhas
    free(transposta);  //Liberando o espaço das linhas

    return 0;
}