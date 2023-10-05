#include<stdio.h>

int main(){
   
   int vetor[10];

   for (int i = 0; i < 10; i++)
   {
      printf("Digite os numeros do vetor: ");
      scanf("%d",&vetor[i]); 
   }

   for (int i = 0; i < 10; i++){
      if (vetor[i] % 2 == 0){
         printf("\nNumero: %d", i);
      }
   }
}
