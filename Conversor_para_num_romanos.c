#include <stdio.h>
#include <string.h>

int main()
{
    //Declarando váriaveis
    char *romanos[]={
        "M", "MM", "MMM", //Casa dos milhares
        "C", "CC", "CCC", "CD", "D" ,"DC", "DCC", "DCCC", "CM", //Casa das centenas
        "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC", //Casa das dezenas
        "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"  //Casa das unidades
    };
    /*Váriavel qnt para mover entre as casas na Váriavel romanos
    Se for nas centenas é 3 para frente, na dezenas é 12 para frente
    e na unidade é 21 para frente*/
    int qnt[]={0,3,12,21};
    //Para armazenar o resultado final:
    char romano[15] = "";
    int numero,num2,num=0;
    //Valores das cazas dos milhares, centena, dezenas e unidades
    int casas[] = {1000,100,10,1};
    
    //Escaneando número
    printf("Digite um número: ");
    scanf("%d",&numero);
    
    //Declarando q a váriavel tem o mesmo valor do numero
    num2 = numero;
    
    //Verificando se está dentro do intervalo
    if(numero<0||numero>=4000){
        printf("Ocorreu algum erro! Digite outro número ná próxima vez");
    }else{
        /*O for vai rodar o IF 4 vezes, para as 4 respectivas casas e então,
        vai verificar se o número ta dentro daquela casa, se sim, calculará
        o número romano daquela casa, e continuara até ter o resultado final*/
        for(int i=0;i<4;i++){
            if(num2>=casas[i]){
                num = num2/casas[i];
                num2 = numero%casas[i];
                strcat(romano, romanos[(num+qnt[i])-1] );
            }
        }
        printf("%s",romano);
    }
    
    return 0;
}


