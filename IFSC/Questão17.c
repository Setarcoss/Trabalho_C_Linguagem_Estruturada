#include <stdio.h>

int main(){
    int a, b, c, d; // declaração das variáveis para os números 

    printf("Informe quatro números abaixo.\n"); // pede para que o usuário informe os números e os armazena nas variáveis 'a', 'b', 'c' e 'd'
    printf("Valor A: ");
    scanf("%d", &a);
    printf("\nValor B: ");
    scanf("%d", &b);
    printf("\nValor C: ");
    scanf("%d", &c);
    printf("\nValor D: ");
    scanf("%d", &d);

    printf("\nSoma dos numeros.\n"); // imprime na tela a soma dos números informados pelo usuário
    
    printf("%d + %d = %d", a, b, (a + b));
    printf("\n%d + %d = %d", a, c, (a + c));
    printf("\n%d + %d = %d", a, d, (a + d));
    printf("\n%d + %d = %d", b, c, (b + c));
    printf("\n%d + %d = %d", b, d, (b + d));
    printf("\n%d + %d = %d", c, d, (c + d));

    printf("\n\nProduto dos numeros.\n"); // imprime na tela o produto dos números informados pelo usuário

    printf("%d * %d = %d", a, b, (a * b));
    printf("\n%d * %d = %d", a, c, (a * c));
    printf("\n%d * %d = %d", a, d, (a * d));
    printf("\n%d * %d = %d", b, c, (b * c));
    printf("\n%d * %d = %d", b, d, (b * d));
    printf("\n%d * %d = %d", c, d, (c * d));

    

    
    return 0;
}