#include <stdio.h>
#include <string.h>

char tipo_pergunta[7];
int numero[50]; 
float alternativaf[50][3]; 
int alternativai[50][3]; 
int j = 0,fl = 0,k,alternativa_escolhida,r,x=0; 
char ch;

struct perguntas{
    char p[105];
    int respostas[100];
}perg_f[100], perg_i[100]; 

void perguntar(){
    while(1){
        scanf("%s",tipo_pergunta);
        if(strcmp(tipo_pergunta, "FIM\0") != 0){ 
            while ((ch = getchar()) != '\n');  
            if(strcmp(tipo_pergunta, "FLOAT\0") == 0){   
                fgets(perg_f[fl].p, 105 ,stdin);
                perg_f[fl].p[strlen(perg_f[fl].p)-1] = '\0'; 
                for(k = 0; k < 3; k++){
                    scanf("%f", &alternativaf[fl][k]);
                }
                scanf("%d",perg_f[fl].respostas); 
                fl++;
            }else{
                if(strcmp(tipo_pergunta, "INT\0") == 0){
                    fgets(perg_i[j].p, 105 ,stdin);
                    perg_i[j].p[strlen(perg_i[j].p)-1] = '\0'; 
                    for(k = 0; k < 3; k++){
                        scanf("%d", &alternativai[j][k]);
                    }
                    scanf("%d",perg_i[j].respostas);
                    j++;            
                }
            }      
        }else{
            break;
        }
    }
}

void responder(){
    while(1){
        scanf("%s",tipo_pergunta);
        if(strcmp(tipo_pergunta, "FIM\0") != 0){
            scanf("%d",&numero[x]);
            if(strcmp(tipo_pergunta, "FLOAT\0") == 0){
                printf("Pergunta: %s\n",perg_f[numero[x]].p);
                for(k = 0; k < 3; k++)
                    printf("Alternativa %d: %.2f\n",k,alternativaf[numero[x]][k]);
                r = *perg_f[numero[x]].respostas; 
            }else{
                if(strcmp(tipo_pergunta, "INT\0") == 0){
                    printf("Pergunta: %s\n",perg_i[numero[x]].p);      
                    for(k = 0; k < 3; k++)
                        printf("Alternativa %d: %d\n",k,alternativai[numero[x]][k]);
                    r = *perg_i[numero[x]].respostas; 
                }
            }
            
            scanf("%d",&alternativa_escolhida);

            if(alternativa_escolhida == r){
                printf("Parabens, voce acertou!\n");
            }else{
                printf("Resposta errada, voce perdeu!\n");
                break;
            }

            x++;
                     
        }else{
            break;
        }
    }
}

int main(){

    perguntar(); 
    
    printf("Prepare-se para o Show do Miltao!\n");

    responder();
    
    return 0;
}