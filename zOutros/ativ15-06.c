#include <stdio.h>
#include <stdlib.h>

int main(){
 
 float media, mediana, nro, soma=0;
 int m, i, y, x=0;
 float ordem[100];
 int maior=0, menor=0;
    printf("Digite os valores: ");
    scanf("%f",&nro);
    
    maior=nro;
    menor=nro;

    while(nro!= 0){

        if(nro>0)
            soma=soma+nro;
            media=soma/nro;
            mediana=(soma+1)/2;
            
            if(nro>maior)maior=nro;
            if(nro<menor)menor=nro;
            x++;
            ordem[x] = nro;

        if(nro<0)
            printf("erro\n");

        printf("Digite os valores: ");
        scanf("%f",&nro);
        
    }

    for(i = 0; i<x;i++){
        for(y = i; y<x; y++){
            if(ordem[i]>ordem[y]){
                m = ordem[i];
                ordem[i] = ordem[y];
                ordem[y] = m;
            }
        }
    }

    printf("Ordem Crescente:\n");

    for(i = 0; i < x; i++){
        printf("%.0f\n",ordem[i]);
    }

    for(i = 0; i<x;i++){
        for(y = i; y<x; y++){
            if(ordem[i]<ordem[y]){
                m = ordem[i];
                ordem[i] = ordem[y];
                ordem[y] = m;
            }
        }
    }

    printf("Ordem decrescente:\n");

    for(i = 0; i < x; i++){
        printf("%.0f\n",ordem[i]);
    }
        
    printf("A soma dos Números: %.2f\n",soma);
    printf("O maior Número Digitado é: %d\n",maior);
    printf("O menor Número digitado é: %d\n",menor);
    printf("A Média Final dos Números é: %.2f\n",media);
    printf("A Mediana dos Números é: %.1f\n",media);
   
   system("pause");
  
}