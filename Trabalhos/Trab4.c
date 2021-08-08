#include <stdio.h>
#include <string.h>

int main(){
    char tipo[7]; //string do tipo da pergunta
    int n[100]; //vetor para o número da pergunta
    float altf[100][3]; //matriz para armazenar as alternativas float.
    int alti[100][3]; //matriz para armazenar as alternativas float.
    /*variáveis i para int, f para float, j para o for,
    alt_esc para a alternativa escolhida e r para o número da resposta correta:*/
    int i = 0,f = 0,j,alt_esc,r; 
    //ch para o fgets funcionar.
    char ch;
    
    //struct perguntas para armazenar os daods das perguntas.
    struct perguntas{
        char p[105];
        int respostas[100];
    }pf[100], pi[100]; //pf = perguntas float, pi = perguntas int

    while(1){
        scanf("%s",tipo);
        if(strcmp(tipo, "FIM\0") != 0){ //Verificando se FIM foi digitado
            while ((ch = getchar()) != '\n');  //while para fazer o fgets funcionar
            if(strcmp(tipo, "FLOAT\0") == 0){   //Vendo se foi digitado FLOAT ou INT
                fgets(pf[f].p, 105 ,stdin);
                pf[f].p[strlen(pf[f].p)-1] = '\0'; //Removendo o \n da váriavel
                for(j = 0; j < 3; j++){
                    scanf("%f", &altf[f][j]);
                }
                scanf("%d",pf[f].respostas); 
                f++;
            }else{
                if(strcmp(tipo, "INT\0") == 0){
                    fgets(pi[i].p, 105 ,stdin);
                    pi[i].p[strlen(pi[i].p)-1] = '\0'; //Removendo o \n da váriavel
                    for(j = 0; j < 3; j++){
                        scanf("%d", &alti[i][j]);
                    }
                    scanf("%d",pi[i].respostas);
                    i++;            
                }
            }      
        }else{
            break;
        }
    }
    
    printf("Prepare-se para o Show do Miltao!\n");

    for(i = 0; i < 100; i++){
        scanf("%s",tipo);
        if(strcmp(tipo, "FIM\0") != 0){
            scanf("%d",&n[i]);
            if(strcmp(tipo, "FLOAT\0") == 0){
                printf("Pergunta: %s\n",pf[n[i]].p);
                for(j = 0; j < 3; j++)
                    printf("Alternativa %d: %.2f\n",j,altf[n[i]][j]);
                r = *pf[n[i]].respostas; //Pegando qual a resposta correta
            }else{
                if(strcmp(tipo, "INT\0") == 0){
                    printf("Pergunta: %s\n",pi[n[i]].p);      
                    for(j = 0; j < 3; j++)
                        printf("Alternativa %d: %d\n",j,alti[n[i]][j]);
                    r = *pi[n[i]].respostas; //Pegando qual a resposta correta
                }
            }
            
            scanf("%d",&alt_esc);

            //Verificando se acertou:
            if(alt_esc == r){
                printf("Parabens, voce acertou!\n");
            }else{
                printf("Resposta errada, voce perdeu!\n");
                break;
            }
                     
        }else{
            break;
        }
    }
    

    return 0;
}