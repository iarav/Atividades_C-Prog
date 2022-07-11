

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int processaMatriz(float mat[][4],int parametro){
    float res = 0.0;
    int i;
    
    for(i=0;i<4;i++){
        res += mat[i][parametro];
    }
    
    return res;
}

int main()
{
   int i,j;
   float matriz[4][4];
   int p;
   
   for(i=0;i<4;i++){
       for(j=0;j<4;j++){
        scanf("%f",&matriz[i][j]);
        }
        
   }
   
   scanf("%d",&p);
   
    processaMatriz(matriz,p);
    
    return 0;
}
