#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Estrutura Aluno
struct aluno{
    char nome[102];
    int ra;
    float p1;
    float p2;
};

int main(){

    //Váriaveis necessárias
    int n,i;
    char ch;

    scanf("%d",&n); //Escaneando nº de alunos

    struct aluno **aa; //Declarando porteiro para a estrutura aluno
    aa = (struct aluno**) malloc(n*sizeof(struct aluno*)); //Alocando o número de estruturas necessárias para cada aluno

    for(i = 0; i < n; i++)
        aa[i] = (struct aluno*) malloc(sizeof(struct aluno)); //Alocando cada estrutura de alunos
    
    while ((ch = getchar()) != '\n'); //while para fazer o fgets funcionar

    for(i = 0; i < n; i++){         
        fgets(aa[i]->nome, 102, stdin);
        aa[i]->nome[strlen(aa[i]->nome)-1] = '\0'; //Removendo \n do nome
        scanf("%d",&aa[i]->ra);
        scanf("%f",&aa[i]->p1);
        scanf("%f",&aa[i]->p2);
        while ((ch = getchar()) != '\n'); //while para fazer o fgets funcionar
    }

    for(i = 0; i < n; i++)
        printf("%d\t%s\t%.2f\n",aa[i]->ra, aa[i]->nome, (aa[i]->p1 + aa[i]->p2)/2); //Imprimindo valores

    return 0;
}