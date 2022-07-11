#include <stdio.h>
#include <string.h>

int main(){

    char palavra[80];

    fgets(palavra, 80, stdin);

    for(int i = strlen(palavra)-2; i>=0; i--){
        printf("%c",palavra[i]);
    }
    printf("\n");

    return 0;
}