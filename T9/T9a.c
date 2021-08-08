#include <stdio.h>
#include <math.h>

//Função para calcular o volume:
float volume_esfera(float raio){
    float pi = 3.14159;
    float volume = (4 * pi * pow(raio,3))/3; //Calculando volume da esfera
    return volume; //retornando o volume
}

//Função principal:
int main(){
    float raio;
    scanf("%f",&raio); //Escaneando o raio da esfera
    printf("%.2f\n",volume_esfera(raio)); //Imprimindo resultado obtido pela função volume_esfera
    return 0;
}