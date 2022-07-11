#include <stdio.h>
#include <math.h>

int main(){

    //definindo a estrutura.
    struct Corpo
    {
        float altura;    //Declarando altura.
        float peso;      //Declarando peso.
        char nome[20];   //Declarando nome.
    }c1; //Definindo o corpo que será utilizado.

    //Escaneando os dados do corpo.
    scanf("%f",&c1.altura);
    scanf("%f",&c1.peso);
    scanf("%s",c1.nome);

    //calculando o IMC(indice de massa corporal).
    float imc = (c1.peso/pow(c1.altura, 2));

    //imprimindo o IMC.
    printf("%.3f",imc);

    return 0;
}