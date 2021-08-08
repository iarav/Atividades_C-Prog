#include <stdio.h>

int main(){
    int j,r,i,k,vencedor,maior;

    scanf("%d %d",&j,&r);

    if(j>=1 && r<=500){
        int pontuacao[j];
        int pontosVitoria[j][r];
        for(i = 0;i<r;i++){
            for(k = 0;k<j;k++){
                scanf("%d",&pontosVitoria[k][i]);
                if(pontosVitoria[k][i]<0 && pontosVitoria[k][i]>100){
                    break;
                }
            }
        }

        for(i = 0;i<j;i++){
            pontuacao[i] = 0;
            for(k = 0;k<r;k++){
                pontuacao[i] += pontosVitoria[i][k];
            }
        }

        for(i = 0;i<j;i++){
            if(pontuacao[i]>=maior){
                maior = pontuacao[i];
                vencedor = i+1;
            }
        }

        printf("%d\n",vencedor);

    }

    return 0;
}