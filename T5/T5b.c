#include <stdio.h>

int main(){
    int qnt[10];
    int i , qntTotal = 0;
    float preco[10];
    float lucro = 0;

    for(i = 0; i<10;i++){
        scanf("%d",&qnt[i]);
    }
    for(i = 0; i<10;i++){
        scanf("%f",&preco[i]);
    }
    for(i = 0; i<10;i++){
        lucro += (qnt[i]*preco[i]); 
        qntTotal += qnt[i];
    }

    printf("O lucro foi de %6.3f e a quantidade de produtos vendidos foi de %d\n", lucro , qntTotal);

    return 0;

}