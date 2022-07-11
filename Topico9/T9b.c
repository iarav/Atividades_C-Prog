#include <stdio.h>
#include <math.h>

//Declaração do protótipo da função media
float media(float nota1, float nota2, char caractere); 

//Declaração função principal
int main(){
    //declarando valores
    char caractere;
    float nota1, nota2;
    //escaneando valores
    scanf("%c",&caractere);
    scanf("%f %f",&nota1,&nota2);
    //Imprimindo media que será calculada pela função media 
    printf("%.3f\n", media(nota1,nota2,caractere));
    return 0;
}

//Definição função media
float media(float nota1, float nota2, char caractere){
    //declarando valores
    float media;

    //Verificando qual caractere foi digitado
    if(caractere == 'A'){
        media = (nota1 + nota2) / 2;  //Calculando média Aritmética
    }else{
        if(caractere == 'B'){
            media = sqrt(nota1 * nota2);  //Calculando média geométrica
        }
    }

    return media;
}