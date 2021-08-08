/*Programa que receberá o tamanho da matriz(n), depois o fator de correlação(x), 
a matriz e as posições e a partir disso multiplicará todos os valores da matriz por x 
e a reorganizará de acordo com as posições. Calculará a soma, a média e o desvio padrão das colunas.
E assim, imprimirá todos os resultados corretos(Matriz corrigida, somas, médias e desvios)*/

#include <stdio.h>
#include <math.h>

int main(){

    int n,x; //declarando variaveis

    scanf("%d",&n);  //escaneando tamanho da matriz
    scanf("%d",&x);  //recenbendo o fator de correlação
    if(n<=10){  //verificando se não ultrapassou o máximo
        //declarando váriaveis
        int matriz[n][n];  
        int posicoes[n][n];  
        double soma[n];
        double media[n];
        double dp[n];
        double sub[n]; //sub é a váriavel que calcula uma parte do desvio      
        int matriz_concertada[n][n];

        for(int l=0;l<n;l++){
            for(int c=0;c<n;c++){
                scanf("%d",&matriz[l][c]); //escaneando a matriz principal
                //calculando o valor correto de acordo com o valor de correlação
                matriz[l][c] = matriz[l][c] * x; 
            }
        }

        for(int l=0;l<n;l++){
            for(int c=0;c<n;c++){
                scanf("%d",&posicoes[l][c]); //escaneando a matriz de posições
            }
        }

        for(int c=0;c<n;c++){
            for(int l=0;l<n;l++){
                //corrigindo as posições
                matriz_concertada[l][c] = matriz[l][posicoes[c][l]];
                //calculando a soma dos valores das regiões
                soma[c] +=  matriz_concertada[l][c];
            }
            //calculando a média dos valores das regiões
            media[c] = soma[c] / n;
        }
        
        for(int c=0;c<n;c++){
            for(int l=0;l<n;l++){
                //calculando a soma das potências da subtração da matriz correta pela média 
                sub[c] += pow(matriz_concertada[l][c]-media[c],2);
            }
            //calculando o desvio padrão (a raiz da divisão de sub por n)
            dp[c] = sqrt(sub[c]/n);
        }
        
        //Imprimindo resultados

        printf("Matriz corrigida\n");

        for(int l=0;l<n;l++){
            for(int c=0;c<n;c++){
                printf("%d\t",matriz_concertada[l][c]);  //Imprimindo a matriz correta
            }
            printf("\n");
        }

        printf("Somas::");
        for( int i = 0; i<n;i++){
            printf("%.2f\t",soma[i]);  //Imprimindo soma
        }
        printf("\n");

        printf("Medias::");
        for( int i = 0; i<n;i++){
            printf("%.2f\t",media[i]); //Imprimindo média
        }
        printf("\n");
        
        printf("Desvios::");
        for( int i = 0; i<n;i++){
            printf("%.2f\t",dp[i]); //Imprimindo devio padrão
        }
        printf("\n");
    }

    return 0;
}