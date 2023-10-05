#include<stdio.h>
#define TAM 15

int main(){

    float numReais[10], quantNegativos = 0 , soma = 0;

    for (int i = 0; i < 10; i++)
    {
      printf("Insiserir um valor (Numeros reais) [%d]", i);
      scanf("%d", &numReais[i]);
      if (numReais[i] < 0)
      {
        quantNegativos++;
      }else{
        soma += numReais[i];
      }
      
      printf("Quantidade de negativos : %f \n Soma dos positivos: %f", quantNegativos, soma);

    }
    
}

  