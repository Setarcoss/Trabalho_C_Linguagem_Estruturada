#include <stdio.h>
 
 int main() {
     int n, a1, r; // variáveis para o numero de termos 'n', o primeiro termo da progressão 'a1' e a razão da progressão 'r'
     int soma = 0;
     
     // pede para que o usário informe os valores
     printf("Digite o numero de termos: ");
     scanf("%d", &n);
     printf("\nDigite o primeiro termo: ");
     scanf("%d", &a1);
     printf("\nDigite a razao: ");
     scanf("%d", &r);
     
     for(int i = 0; i < n; i++) // inicia o laço para calcular a  progressão
     {
        int pa = a1 + i * r;
        printf("\n%d", pa);
        
        soma += pa; // acumula a soma dos valores da progressão
     }
     
     printf("\nA soma dos elementos da progressao e: %d", soma); // imprime o valor da soma dos valores da progressão
     return 0;
 }