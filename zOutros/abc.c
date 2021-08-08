#include <stdio.h>
#include <string.h>

int main(){
    char nome[100];
    char sexo;
    int idade;
    float salariofixo, salariofinal;
    float abono1=100;
    
    printf("Digite o nome do funcionário: ");
    fgets(nome, 100, stdin);
    printf("Qual o Sexo do Funcionário: ");
    scanf ("%c", &sexo);
    
    printf("Digite a Idade do Funcionário: ");
    scanf ("%d",&idade);
    
    printf("Qual o Salário Fixo deste Funcionário: ");
    scanf ("%f",&salariofixo);
    
    if ((sexo == 'M') && (idade>=30)){
        salariofinal = salariofixo + 100;
        printf( "O salario final é: %.2f\n", salariofinal);
    }else{
        if ((sexo == 'M') && (idade<30)){
             salariofinal = salariofixo + 50;
            printf( "O salario final e: %.2f\n", salariofinal);
        }else{
            if ((sexo == 'F') && (idade>=30)){
                 salariofinal = salariofixo + 200;
            printf( "O salario final e: %.2f\n", salariofinal);
            }else{
                if ((sexo == 'F') && (idade<30)){
                 salariofinal = salariofixo + 80;
                 printf( "O salario final e: %.2f\n", salariofinal);
                }
            }
        }
    }
}
