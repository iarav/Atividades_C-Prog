#include <stdio.h>

void sort(int *vendas, int *vetor2, int i, int g);

int main () {
    int i;
    int vetor2[8];
    int vendas[8] = {2,0,0,2,8,6,2,0}; // números do RA

    printf("Vetor Preenchido:\n");
    for(i = 0; i < 8; i++)
        printf(" %d ",vendas[i]);  
    
    printf("\n");

    sort(vendas, vetor2, 0, 7);

    printf("Quantidade de Vendas de cada barraca de modo ordenado:\n");
    for (i = 0; i < 8; i++) 
        printf(" %d ", vendas[i]);

    printf("\n");

    return 0;
}

void sort(int *vendas, int *vetor2, int i, int g) {
  if (i >= g) return;

  int k = (i + g) / 2;

  sort(vendas, vetor2, i, k);
  sort(vendas, vetor2, k + 1, g);

  if (vendas[k] <= vendas[k + 1]) return;

  int z,
      ivendas = i, ivetor2 = k + 1;

  for (z = i; z <= g; z++) vetor2[z] = vendas[z];

  z = i;

  while (ivendas <= k && ivetor2 <= g) {
    if (vetor2[ivendas] <= vetor2[ivetor2]) vendas[z++] = vetor2[ivendas++];
    else vendas[z++] = vetor2[ivetor2++];
  }

  while (ivendas <= k) vendas[z++] = vetor2[ivendas++];

  while (ivetor2 <= g) vendas[z++] = vetor2[ivetor2++];
}