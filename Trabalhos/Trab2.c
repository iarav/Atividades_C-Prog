/*Iara de Souza Vaneti   RA: 254261*/

#include <stdio.h>

int main()
{
    /*Declaração das Variaveis:*/
    
    int n = 0, i = 0, p = 0, x = 0, r = 0;
    
    /*escaneando por variavel de entrada:*/
    
    scanf("%d" , &n);
    
    /*utilização da estrutura de repetição for. 
    Ela receberá o número de linha e a partir disso repetirá os comandos de acordo com a entrada.
    Somando 1 a cada repetição*/
    
    for(i=1; i<=n;i++){
        
        /*O if verifica se a linha é par ou impar. 
        Pois se for impar deverá imprimir 1 e se for impar imprimir 0*/
        
        if(i % 2 != 0){
            x = 1;
            
            /*Esse for verifica qual linha está no momento e repete o 1 de acordo.
            Exemplo: se for linha 3 ele coloca o 1 três vezes na linha:*/
            
            for(p=1; p<=i;p++){
                printf("%d",x);
            }
            
            /*Por ser a linha de 1, no final dela terá o resultado da soma de seus valores:*/
            
            printf("=%d\n",i);
        }else{
            x = 0;
            
             /*Novamente, esse for verifica qual linha está no momento e repete o 0 de acordo.*/
            
            for(p=1; p<=i;p++){
                printf("%d",x);
            }
            
            /*No final de cada linha precisa ter uma quebra*/
            
            printf("\n");
        }
        
        /*Está calculando quantos números foram impressos:*/
        r = r + i;
    }
    
    /*Imprimira a quantidade e então da uma quebra de linha*/
    
    printf("%d\n",r);
    
    return 0;
}
