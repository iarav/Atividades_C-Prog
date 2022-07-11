#include <stdio.h>

int main() {
    
    int x, n, p, i = 0;
    x = 1;
    
    while(x<=10){
        scanf ("%d", &n);
        
        if(n % 2 != 0){
            i=i+1;
        }else{
            p=p+1;
        }
        
        x++;
    }
    
    printf("%d pares, %d impares\n", p, i);
    
    return 0;
}