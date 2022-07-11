#include <stdio.h>

int main(){
    int y[10], x[10];
    int i;

     for(i = 0; i<10;i++){
        scanf("%d",&x[i]);
    }
    for(i = 0; i<10;i++){
        scanf("%d",&y[i]);
    }
    for(i = 0; i<10;i++){
        printf("%d|%d|", x[i],y[i]);
    }
    printf("\n");

    return 0;
}