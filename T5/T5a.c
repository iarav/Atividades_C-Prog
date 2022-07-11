#include <stdio.h>

int main(){
    float notas[20];
    float x, d = 0;
    int i;

    for(i = 0; i < 20; i++){
        scanf("%f",&x);
        if(x<0 || x>10){
            continue;
        }
        notas[i] = x;
    }

    while(d>=0){
        scanf("%f",&d);
        if(d<0){
            break;
        }
        for(i = 0; i <= 20; i++){
            if(i==20){
                printf("nao existe\n");
            }else{
                if(d == notas[i]){
                    printf("existe\n");
                    break;
                }
            }  
        }
    }
    return 0;
}