#include<stdio.h>

main(){

int A[6] = {1, 0, 5, -2,  -2, 7}, soma = 0;

/*soma = A[0] + A[1] + A[5];

printf("Soma: %d",soma);

A[4] = 100;

for(int i = 0; i < 6; i++)
    printf("\nA : %d", A[i]);

*/
    for (int i = 0; i < 6; i++){
    {
       if(i == 0 || i == 1 || i == 5)
            soma += A[i];
    }
    if (i == 4)
    {
        A[i] = 100;
    }
    printf("\n A: %d", A[i]);
    }
    printf("\n Soma: %d", soma);
}