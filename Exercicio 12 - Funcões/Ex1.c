#include<stdio.h>

char imprimirOpcoesDePagamento(){

    char opcao[2];
    printf("Escolha uma opcao de pagamento:");
    printf("\n\nOpcao a) a vista com 10%% de desconto;");
    printf("\nOpcao b) em duas vezes (preco da etiqueta); ");
    printf("\nOpcao c) de 3 ate 10 vezes com 3%% de juros ao mes (obs: somente para compras acima de R$100,00)\n");

    fgets(opcao, sizeof(opcao), stdin);

    return opcao[0];
}

    void opcaoA(float totalGasto){
        printf("Opcao a) a vista com 10%% de desconto;");
        float valorComDesconto = totalGasto - (totalGasto * 0.10);
    printf("\nValor total: R$ %.2f\n", valorComDesconto);}

    void opcaoB(float totalGasto){
        printf("\nOpcao b) em duas vezes;");
        float duasVezes = totalGasto / 2;
    printf("\nValor total das prestaoes: R$ %.2f\n", duasVezes);
    }
    void opcaoC(float totalGasto){
    printf("\nOpcao c) de 3 ate 10 vezes com 3%% de juros ao mes (obs: somente para compras acima de R$100,00)");
    if (totalGasto > 100.00){
        int parcelas;

        printf("\nInforme a quantidade de parcelas que deseja dividir: ");
        scanf("%d", &parcelas);

        if (parcelas >= 3 && parcelas <= 10)
        {
            float valor = totalGasto / parcelas * (1.0 + 0.03);
            printf("\nValor total das prestacoes em %d vezes: R$ %.2f", parcelas, valor * parcelas);
        }

    }
    }

int main(){

    /*Fazer um programa que solicita o total gasto pelo cliente de uma loja, imprime as opções de pagamento, solicita a opção desejada e imprime o valor total das prestações (se houverem).

    a) Opção: a vista com 10% de desconto

    b) Opção: em duas vezes (preço da etiqueta)

    c) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).

    OBS: fazer uma função que imprime as opções, solicita a opção desejada e retorna a opção escolhida. No programa principal, testar a opção escolhida e ativar a função correspondente (uma função para cada opção). */
  

  float totalGasto;

    printf("Informe o total gasto pelo cliente: R$ ");
    scanf("%f", &totalGasto);
    getchar();

    char opcao = imprimirOpcoesDePagamento();

    switch (opcao)
    {
    case 'a':
        opcaoA(totalGasto);
        break;

    case 'b':
        opcaoB(totalGasto);
        break;

    case 'c':
        opcaoC(totalGasto);
    break;


    default:
        printf("Opcao invalida\n");

        break;
    }
    return 0;

}