#include <stdio.h>

int main() {
    int a, b, c; // variáveis para os valores de a, b e c
    int maior; // variável para armazenar o maior valor
    
    printf("Digite o valor de a: "); // solicita o valor de a
    scanf("%d", &a);
    maior = a; // inicializa maior com o valor de a
    printf("Digite o valor de b: "); // solicita o valor de b
    scanf("%d", &b);
    if(b > maior){ // verifica se b é maior que o atual maior
        maior = b;
    }
    printf("Digite o valor de c: "); // solicita o valor de c
    scanf("%d", &c); 
    if(c > maior){ // verifica se c é maior que o atual maior
        maior = c;
    }
    
    printf("a = %d", a);
    printf("\nb = %d", b);
    printf("\nc = %d", c);
    printf("\n%d e o maior.", maior); // exibe o maior valor

    return 0;
}