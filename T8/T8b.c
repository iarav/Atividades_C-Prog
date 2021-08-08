#include <stdio.h>

int main(){

    //definindo as estruturas.
    struct Ponto
    {
        int x,y;  //Declarando x e y.
    };  //Definindo os 2 Pontos que serão utilizados.

    struct Retangulo
    {
        struct Ponto PI; //Declarando o Ponto Inferior Esquerdo.
        struct Ponto PS; //Declarando o Ponto Superior direito.
    }Ret1,Ret2;  //Definindo os 2 retângulos que serão utilizados.

    //Escaneando os pontos de ambos os retângulos.
    scanf("%d %d",&Ret1.PI.x,&Ret1.PI.y);
    scanf("%d %d",&Ret1.PS.x,&Ret1.PS.y);
    scanf("%d %d",&Ret2.PI.x,&Ret2.PI.y);
    scanf("%d %d",&Ret2.PS.x,&Ret2.PS.y);
    
    //Verificando se está no 1º quadrante:
    if(Ret1.PI.x>=0 && Ret1.PI.y>=0 && Ret1.PS.x>=0 && Ret1.PS.y>=0 && Ret2.PI.x>=0 && Ret2.PI.y>=0 &&Ret2.PS.x>=0 && Ret2.PS.y>=0){
        //Verificando se o segundo está dentro do primeiro.
        if(Ret2.PI.x >= Ret1.PI.x && Ret2.PI.y >= Ret1.PI.y && Ret2.PS.x <= Ret1.PS.x && Ret2.PS.y <= Ret1.PS.y){
            printf("o segundo retangulo esta contido no primeiro\n");
        }else{
            printf("o segundo retangulo nao esta contido no primeiro\n");
        }
    }
    
    return 0;
}