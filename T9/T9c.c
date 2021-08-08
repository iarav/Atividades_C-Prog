#include <stdio.h>
#include <math.h>

//Declaração dos protótipos das funções
float soma(float numero1,float numero2); //somar
float sub(float numero1,float numero2);  //subtrair
float mult(float numero1,float numero2); //multiplicação
float div(float numero1,float numero2);  //divisão
float pot(float numero1,float numero2);  //potência

//Declaração função principal
int main(){
    //declarando valores
    float numero1, numero2;
    char operador;
    float resultado;

    //Escaneando valores
    scanf("%f%c%f",&numero1, &operador, &numero2);

    //Verificando qual operador foi digitado
    switch (operador)
    {
    case '+':
        resultado = soma(numero1, numero2);
        break;
    case '-':
        resultado = sub(numero1, numero2);
        break;
    case '*':
        resultado = mult(numero1, numero2);
        break;
    case '/':
        resultado = div(numero1, numero2);
        break;
    case '^':
        resultado = pot(numero1, numero2);
        break;
    default:
        break;
    }
    
    printf("%.3f\n",resultado);

    return 0;
}

//Função soma
float soma(float numero1,float numero2){
    float resultado = numero1+numero2;
    return resultado;
}

//Função subtração
float sub(float numero1,float numero2){
    float resultado = numero1-numero2;
    return resultado;
}

//Função multiplicação
float mult(float numero1,float numero2){
    float resultado = numero1*numero2;
    return resultado;
}

//Função divisão
float div(float numero1,float numero2){
    float resultado = numero1/numero2;
    return resultado;
}

//Função potência
float pot(float numero1,float numero2){
    float resultado = pow(numero1,numero2);
    return resultado;
}
