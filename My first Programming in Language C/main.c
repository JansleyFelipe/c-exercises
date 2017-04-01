/*calcula e informaa soma de 2 valores */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val1, val2, soma;
    do
    {
      printf("\nDigite o primeiro valor ");
      scanf("%d", &val1);
      printf("\nDigite o segundo valor ");
      scanf("%d", &val2);
    }
    while(val1<0 || val2<0);

     soma = val1 + val2;
     printf("\nResultado: %d", soma);

     return 0;
    }
