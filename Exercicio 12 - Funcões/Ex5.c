#include<stdio.h>

float converterIdade(int idade){
    int idadeDias, idadeMeses, idadeAnos;

    idadeMeses = idade * 12;
    idadeDias = idadeMeses * 30;
    idadeAnos = idade;

    printf("Idade: %d anos, %d meses e %d dias", idadeAnos, idadeMeses, idadeDias);
}

int main(){

    /Faça uma função que recebe a idade de uma pessoa em apresente sua idade expressa em dias, meses e anos./

    int idade;

    printf("Informe sua idade em anos: ");
    scanf("%d", &idade);

    converterIdade(idade);


    return 0;


  
}