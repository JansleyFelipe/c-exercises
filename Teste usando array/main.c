#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main()
{
  int array[MAX] = {3,5,1,4,2};
  int i, i2, aux, pos_menor, menor;

  printf("Array fora de ordem: \n");
  for(i = 0; i<MAX; i++)
{
    printf("%d\t", array[i]);
}
for(i=0; i<MAX; i++)
{
    menor = array[i];
    pos_menor = i;

    for(i2 = i+1; i2<MAX; i2++)
    {
       if(array[i2] < menor)
       {
           menor = array[i2];
           pos_menor = i2;
       }
    }
    if(pos_menor != i) // != significa diferença, ou seja, se a pos_menor e diferente de i que tinha declarado anteriormente
    {
        aux = array[i]; // O Aux serve pra salvar/confimar que o menor valar esta na primeira posiçao
        array[i] = array[pos_menor];
        array[pos_menor] = aux; //aqui trocamos a posiçao
    }
}
int j;
printf("\nArray em ordem: \n");
for(j = 0; j<MAX; j++)
{
    printf("%d \t", array[j]);
}

    return 0;

}
