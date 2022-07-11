#include <stdio.h>

int main(){
    float valor,valor_parcela, preco_final;
    int parcela_escolhida,percentual;
    int parcelas[11] = {0,6,12,18,24,30,36,42,48,54,60};

    printf("Digite o valor do carro: ");
    scanf("%f",&valor);
    printf("Digite a parcela escolhida: ");
    scanf("%d",&parcela_escolhida);

    if(parcela_escolhida == 0){
        preco_final = valor - valor*0.2;
        percentual = 20;
        valor_parcela = preco_final;
    }else{
        percentual = 3;
        for(int i = 1; i < 11; i++){
            printf("%d\n",percentual);
            if(parcela_escolhida == parcelas[i]){
                  printf("%d\n",percentual);
                percentual = percentual / 100;
                  printf("%d\n",percentual);
                preco_final = valor - valor*percentual;
                  printf("%d\n",percentual);
                percentual = percentual * 100;
                  printf("%d\n",percentual);
                valor_parcela = preco_final/parcela_escolhida;
                break;
            }else{
                percentual = percentual + 3;
            }
        }
    }
    
    if(percentual ==20){
        printf("Preço Final: %.2f \nQuantidade de parcelas: %d \nValor da Parcela: %.2f \nJuros Aplicado: %d porcento de desconto\n", preco_final, parcela_escolhida,valor_parcela,percentual);
    }else{
        printf("Preço Final: %.2f \nQuantidade de parcelas: %d \nValor da Parcela: %.2f \nJuros Aplicado: %d porcento\n", preco_final, parcela_escolhida,valor_parcela,percentual);
    }
}