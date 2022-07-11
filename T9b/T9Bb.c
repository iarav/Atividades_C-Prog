#include <stdio.h>

//Procedimento de soma de dois números complexos z e w
void soma(int *a,int *b,int *c,int *d){
    *a = *a + *c; //Soma da parte 1
    *b = *b + *d; // Soma da parte 2
}

//Procedimento de multiplicação de dois números complexos z e w
void mult(int *a,int *b,int *c,int *d){
    int x;
    x = *a * *c - *b * *d;  // Multiplicação da parte 1
    *b = *a * *d + *b * *c; // Multiplicação da parte 2 e salvando em b
    *a = x;  // Salvando a multiplicação da parte 1 em a
}

int main(){
    int a,b,c,d;
    char sinal;

    scanf("%d %d %c %d %d",&a,&b,&sinal,&c,&d); // Escaneando valores

    //Verificando se o sinal é +(mais) ou *(vezes)
    if(sinal == '+'){
        soma(&a,&b,&c,&d); //Chamando o procedimento soma
    }else{
        if(sinal == '*'){
            mult(&a,&b,&c,&d); //Chamando o procedimento mult
        }
    }

    printf("%d + %di\n",a,b);  //Imprimindo resultados
    return 0;
}