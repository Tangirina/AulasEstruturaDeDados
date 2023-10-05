#include<stdio.h>

int main(){
   
   float x[5], y[5];


   for (int i = 0; i < 5; i++)
   {
      printf("\n Digite os numeros do vetor X: ");
      scanf("%f", &x[i]);

      y[i] = x[i] * x[i];
   }
   
   for(int i = 0; i < 5; i++){
      printf("\n Valores de x[%d] = %.2f e Valores de y[%d] = %.2f", i, x[i], i, y[i]);
   }

}