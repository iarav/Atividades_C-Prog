#include <stdio.h>
#include <string.h>


int main(){
    int n, j, len;
    char linha[501];
   
    scanf("%d",&n);
    fgets(linha, 501, stdin);
    for(int i = 0; i < n; i++){
            fgets(linha, 501, stdin);
            linha[strlen(linha)-1] = '\0';
            len = strlen(linha);
            char primeira[len/2];
            char segunda[len];
            for(j = 0; j < len/2; j++){
                  primeira[j] = linha[len/2 - j - 1];
                  segunda[j] = linha[len - j - 1];
            }
            primeira[len/2] = '\0';
            segunda[len/2] = '\0';
            printf("%s%s\n",primeira,segunda);
    }
   
    return 0;
}