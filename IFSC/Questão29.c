#include <stdio.h>

int main(){
    int data; // variável para armazenar a data no formato DDMMAA
    int D, M, A; // variáveis para armazenar o dia, mês e ano
 
    printf("Informe a data no formato DDMMAA: "); // solicita ao usuário que informe a data no formato DDMMAA
    scanf("%d", &data); 

    D = (data / 10000); // extrai o dia da data
    M = (data / 100) % 100; // extrai o mês da data
    A = data % 100; // extrai o ano da data

    printf("%d%d%d\n", A, M, D); // imprime a data no formato AAMMDD

    
    return 0;
}