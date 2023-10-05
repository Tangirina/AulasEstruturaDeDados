#include<stdio.h>
#define TAM 15

int main(){

int valores[5], soma = 0, maior, menor, media;

for (int i = 0; i < 5; i++)
{
  printf("Inserir um valor na variavel valores: [%d] ", i);
  scanf("%d", &valores[i]);
  soma += valores[i];
}

maior = valores[0];
menor = valores[0];

for (int i = 0; i < 5; i++)
{
  printf("\nDados em valores [%d] = %d", i, valores[i]);
  if (valores[i] > maior)
  {
    maior = valores[i];
  }else if(valores[i] < menor){
    menor = valores[i];
  }
  
}
  media = soma/5;
  printf("\nA media dos valores inseridos e : %d", media);
  printf("\nO numero maior e: %d \nO numero menor e: %d", maior, menor);
    
}
  

  