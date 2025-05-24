#include <stdio.h>

int main(){
    
    int N, M; // variável para o número informado pelo usúario e a sua ordem inversa
    int C, D, U; // unidade, dezena, centena
    printf("Informe um numero de 3 digitos(ex: 123): "); // solicita o número ao usuário
    scanf("%d", &N);

    C = (N / 100) % 10; // separa a centena do número e armazena em 'C'
    D = (N / 10) % 10; // separa a dezena do número e armazena em 'D'
    U = N % 10; // separa a unidade do número e armazena em 'U'
    
    M = (U *100) + (D * 10) + C; 
    
    printf("\nOrdem inversa -> %d", M); // imprime o valor 'M' com a ordem inversa

    return 0;
}