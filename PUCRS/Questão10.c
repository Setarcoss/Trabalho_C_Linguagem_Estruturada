#include <stdio.h>

int main(){

    int n, cont, resultado; // variáveis para o valor informado 'n', contador e o resultado do cálculo

    for ( cont = 0; cont < 20; cont++) // repetirá o bloco 20 vezes
    {
        printf("Informe o valor de n: ");
        scanf("%d", &n);
       
        for (int i = 1; i <= n; i++) // repetirá a expressão 'n' vezes
         {
            resultado = i * n;
            printf("\n %d x %d = %d\n", i, n, resultado); 
         }
         
         printf("\n-------------------------------------\n\n"); // linha para separar um cálculo do outro
    }
    

    return 0;
}