#include <stdio.h>

int main(){

    float peso_atletas[7][5];
    float media[7];
    float media_ano1, menor_peso;
    int l,c;

    for(l = 0; l<7; l++){
        for(c = 0; c<5; c++){
            printf("Informe o peso do atleta %d no ano %d (em kg.):",(l+1),(c+1));
            scanf("%f",&peso_atletas[l][c]);
        }
    }

    printf("RELATORIO DOS ATLETAS EM 6 ANOS:\n");

    for(l = 0; l<7; l++){
        for(c = 0; c<5; c++){
            media[l] += peso_atletas[l][c];
        }
        media[l] /= 5;
        printf("Atleta %d: A media de peso e’ %.2f kg.\n",(l+1),media[l]);
    }

    for(l = 0; l<7; l++){
        media_ano1 += peso_atletas[l][0];
    }
    media_ano1 /= 7;
    printf("A media de pesos de todos os atletas no primeiro ano e’ %.2f kg.\n",media_ano1);

    menor_peso = peso_atletas[0][0];
    for(l = 0; l<7; l++){
        for(c = 0; c<5; c++){
            if(peso_atletas[l][c]<menor_peso){
                menor_peso = peso_atletas[l][c];
            }
        }
    }

    printf("O menor peso entre todos os atletas e’ %.2f kg.\n", menor_peso);

    return 0;
}