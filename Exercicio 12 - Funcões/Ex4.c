#include<stdio.h>

void somarColunas(int matriz[61][10]){
    for (int i = 0; i < 10; i++){
        int soma = 0;
        for (int j = 0; j < 61; j++){
            soma += matriz[i][j];
        }
        matriz[61][i] = soma;
    }
    
}

int main(){

    /Faça um procedimento que receba, por parâmetro, uma matriz 61x10. O procedimento deve somar individualmente as colunas da matriz e armazenar o resultado na 61a linha da matriz. O procedimento deve retornar a matriz alterada./
  
    int matriz[61][10];

    somarColunas(matriz);

    for (int i = 0; i < 10; i++){
        printf("Soma da coluna %d: %d\n", i, matriz[60][i]);
    }

    return 0;
    



}