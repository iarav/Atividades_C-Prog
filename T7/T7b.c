#include <stdio.h>
#include <string.h>

int main(){

    char palavra[80]; //Declarando string
    char invertida[80];
    int z = 0; 

    scanf("%s",palavra); //lendo a string
    
    for(int i = strlen(palavra); i-1>=0; i--){
        if(palavra[i-1]>='A' && palavra[i-1]<='Z'){
            palavra[i-1] = ((palavra[i-1] - 'A') + 'a'); //Transformando em minuscula
        }
        invertida[z] = palavra[i-1]; //invertendo
        z++;
    }
    
    invertida[strlen(palavra)] = '\0'; //Acrescentando um \0 para ficar igual
  
    if(strcmp(palavra, invertida) != 0){ //Verificando se é igual
        printf("Esta palavra nao e um palindromo"); 
    }else{
        printf("Esta palavra e um palindromo");
    }
    printf("\n"); //Adicionando quebra de linha no final

    return 0;
}