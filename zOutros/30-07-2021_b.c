#include <stdio.h>
#include <math.h>
#include <string.h>

struct dados
{
    char nome[100];
    int letra;
    float nota1, nota2, nota3, nota4;
    float media;
    int posicao;
};
void leitura (struct dados x[], int j ) {
    char ch;
    while ((ch = getchar()) != '\n');
    
    for ( int k = 0 ; k < j ; k++ )
    {
        fgets(x[k].nome, 100 ,stdin);
        x[k].nome[strlen(x[k].nome)-1] = '\0';
        scanf("%f %f %f %f", &x[k].nota1, &x[k].nota2, &x[k].nota3, &x[k].nota4);
        while ((ch = getchar()) != '\n'); 
    }
};
void notas ( struct dados x[], int j ) {
    for ( int i = 0; i < j ; i++)
    {
        x[i].media = x[i].nota1 + x[i].nota2 + x[i].nota3 + x[i].nota4;
        x[i].media = x[i].media/4;
    }
};
void ordem ( struct dados x[], int j ) {

    for ( int i = 0 ; i < j ; ++i )
    {
        int aux = 0;

        for ( int k = 0 ; k < j ; ++k )
        {
            if ( x[i].media > x[k].media ){
                    ++aux;
            }
        }
        x[i].posicao = j - aux;
    }
};
void ordemalfa ( struct dados x[], int j ) {
    struct dados interm[j];
    for ( int i = 0 ; i < j ; ++i ) {
        int aux = 0;
        for ( int k = 0 ; k < j ; ++k )
        {
            if ( i != k ) {
            int z = -1;
            do
            {
                ++z;
            } while ( x[i].nome[z] == x[k].nome[z]);

            if ( x[i].nome[z] > x[k].nome[z] ){
                    ++aux;
            }
        }}
        x[i].letra = aux;
    }
    for ( int i = 0 ; i < j ; ++i )
    {
        int a;
        a = x[i].letra;
        interm[a] = x[i];
    }
    for ( int i = 0 ; i < j ; ++i )
    {
        x[i] = interm[i];
    }
};
int main ()
{
    // n = numero de vagas e c = numero de candidatos
    int n, c;
    scanf ("%i", &n);
    scanf ("%i", &c);
    struct dados concurso[c];
    leitura (concurso, c);
    notas (concurso, c);
    ordem (concurso, c);
    ordemalfa (concurso, c);
printf ("\n");
for ( int i = 0 ; i < c ; ++i )
{
    printf ("%s %.2lf %i ", concurso[i].nome, concurso[i].media, concurso[i].posicao);
    if ( concurso[i].media < 7 ){
        printf ("Desclassificado\n");
    }
    if ( concurso[i].media >= 7 && concurso[i].posicao <= n ){
            printf ("Aprovado\n");
    }
    if ( concurso[i].media >= 7 && concurso[i].posicao > n ){
            printf ("Classificado\n");
    }
}

printf ("\n");

    return 0;

}