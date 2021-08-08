#include<stdio.h>
int main(){
    int x,j, num, par[5], impar[5],p=0,i=0;

  

    for (x=0; x<15; x++){
       
        scanf("%d",&num);

        if(num%2 == 0)
        {
            par[p]=num;
            p++;
        }
        else 
        {
            impar[i]=num;
            i++;
        }

        if(p == 5){
            for(j=0;j<5;j++){
                printf("par[%d] = %d\n",j,par[j]);
            }
            p=0;
        }else{
            if(i == 5){
                for(j=0;j<5;j++){
                    printf("impar[%d] = %d\n",j,impar[j]);
                }
                i=0;
            }
        }       
     }

    for (j=0; j<i; j++)
         printf("impar[%d] = %d\n",j,impar[j]);

    for (j=0; j<p; j++)
         printf("par[%d] = %d\n",j,par[j]);
         
    return 0;
}