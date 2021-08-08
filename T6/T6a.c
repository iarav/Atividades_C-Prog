#include <stdio.h>
//Definindo um máximo para ser o valor da matriz:
#define MAX 20

int main(){

    int  NUM_LIM, NUM_COL, l, c;

    scanf("%d %d", &NUM_LIM, &NUM_COL);

    //If para se assegurar que não ultrapassou o máximo.
    if( NUM_LIM<=MAX &&  NUM_COL <=MAX){
        int matriz[NUM_LIM][NUM_COL];

        //passar scaneando os itens por cada linha
        for(l=0;l<NUM_LIM;l++){
            for(c = 0; c <NUM_COL; c++){
                scanf("%d",&matriz[l][c]);
            }
        }

        //Imprimindo os valores transpostos
        for(c=0;c<NUM_COL;c++){
            for(l = 0; l < NUM_LIM; l++){
                printf("%d ",matriz[l][c]);
            }
            printf("\n");
        }
    }

    return 0;
}