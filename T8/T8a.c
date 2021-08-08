#include <stdio.h>
#include <math.h>

int main(){

    //definindo a estrutura.
    struct Ponto
    {
        float x,y;  //Declarando x e y.
    }p1,p2; //Definindo Pontos que serão utilizados.

    //Escaneando os pontos.
    scanf("%f %f",&p1.x,&p1.y);
    scanf("%f %f",&p2.x,&p2.y);

    //calculando a distância euclidiana.
    float dist = sqrt(pow(p2.x-p1.x, 2) + pow(p2.y-p1.y, 2));

    //Verificando se os pontos são iguais.
    if(dist<0.0000001){
        printf("os pontos sao iguais\n");
    }else{
        printf("os pontos nao sao iguais\n");
    }
    
    return 0;
}