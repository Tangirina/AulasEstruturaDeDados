#include<stdio.h>

int main(){
   
   int vetor[8], soma, posx, posy;

   for (int i = 0; i < 8; i++)
   {
      printf("Digite os valores do vetor: ");
      scanf("%d",&vetor[i]);
   }
   for (int i = 0; i < 8; i++)
   {
      printf("Digite a posicao X: ");
      scanf("%d",&posx);
      printf("Digite a posicao Y: ");
      scanf("%d",&posy);
   
      soma = vetor[posx] + vetor[posy];
      printf("Soma posicao x [%d] de valor [%d] e posicao y [%d] de valor [%d] = %d ", posx,vetor[posx],posy,vetor[posy], soma);
   }
}
