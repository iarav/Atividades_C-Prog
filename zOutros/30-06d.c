#include <stdio.h>
#include <stdlib.h>
#define max 20 

int fim=0;
 
typedef struct Vendedores tipoVendedor;

struct Vendedores{
    int codvendedor;
    char nome[35];
    char produto[30];
    int Quantidade;
    float valor, subtot; 
}Cadastro[max]; // criar uma constante com tamanho 20 


int menu(), verificaLista();
void inicia(), cadastrar();
void exibir(), relatarProdutos(),alterar(),excluir(),finalizar(); 

int main(){
    menu();   
    system("pause");
    return 0;
}

int menu(){
    
    char opc[50];
    int opcao;
    
    fflush(stdin);//retira o lixo do teclado
    printf("\n(1) - Cadastrar Produto\n");
    printf("\n(2) - Consultar Produtos\n");
    printf("\n(3) - Alterar Produtos\n");
    printf("\n(4) - Excluir Produtos\n");
    printf("\n(5) - Relatar Produtos\n");
    printf("\n(6) - Finalizar\n");
    
    do{
        
        printf("\n> ");
        fflush(stdout);
        fgets(opc,50,stdin);
        
        opcao = atoi(opc); //converte uma string em inteiro
    }while(opcao<0 || opcao>8);
    
    switch(opcao){
        case 1:
            cadastrar();
            break;
        case 2:
            exibir();
            break;
        case 3:
            alterar();
            break;
        case 4:
            excluir();
            break;
        case 5:
            relatarProdutos();
            break;
        case 6:
            finalizar();
            break;
    }

}

void inicia(){
    register int i;
    for (i=0; i<max; i++) Cadastro[i].produto[0] = '\0';
}

void cadastrar(){
    
    int Cad;
    float soma = 0;
    
    Cad = verificaLista();
    
    printf("\nDigite o Código do Vendedor: ");
    fflush(stdout);
    scanf("%d", &Cadastro[Cad].codvendedor);
    
    printf("\nDigite o Nome do Vendedor: ");
    fflush(stdout);
    fgets(Cadastro[Cad].nome,35,stdin);
    fgets(Cadastro[Cad].nome,35,stdin);
    
    printf("\nDigite o Produto: ");
    fflush(stdout);
    fgets(Cadastro[Cad].produto,30,stdin);
    
    printf("\nDigite a Quantidade: ");
    fflush(stdout);
    scanf("%d", &Cadastro[Cad].Quantidade);
    
    printf("\nDigite o Valor: ");
    fflush(stdout);
    scanf("%f", &Cadastro[Cad].valor);
    
    printf("\nDigite o SubTotal: ");
    fflush(stdout);
    scanf("%f", &Cadastro[Cad].subtot);
    
    fim++; //acaba quando realiza um cadastro
}

int verificaLista(){
    register int t;
    for (t=0; t<Cadastro[t].produto[0] && t<max; t++){
        if (t==max)return -1;
    }
    return t;
}

void exibir(){
    
    int i;
    
    if(fim == 0){
        printf("\nNão existe nenhum Cadastro no Momento");
        return;
    }else{
        for(i=0; i<fim; i++){
            printf("\nCódigo do Vendedor: %d",Cadastro[i].codvendedor);
            printf("\nNome do Vendedor: %s",Cadastro[i].nome);
            printf("\nProduto: %s",Cadastro[i].produto);
            printf("\nQuantidade de Produto Vendido: %d",Cadastro[i].Quantidade);
            printf("\nValor do Produto Vendido: %f",Cadastro[i].valor);
            printf("\nSubTotal da Venda: %f",Cadastro[i].subtot);
        }
    }
}

void alterar(){

}

void excluir(){

}

void finalizar(){
    system("pause");
    printf("Até Mais!");
}

void relatarProdutos(){
    printf(" __________________________________________________\n");
    printf("| Cod.\tNome\tProduto\tQuantidade\tValor\tSubtotal |\n");
    for()
}