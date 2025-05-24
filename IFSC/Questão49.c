#include <stdio.h>

int main() {
    int x, y, z; // variáveis para os lados do triângulo
    
    printf("Informe os valores dos lados do triangulo.\n"); // solicitado os valores dos lados do triângulo
    printf("Valor de X: ");
    scanf("%d", &x);
    printf("Valor de Y: ");
    scanf("%d", &y);
    printf("Valor de Z: ");
    scanf("%d", &z);
    
    if(x <= 0 || y <= 0 || z <= 0){ // verifica se os valores são positivos
        printf("Um dos valores esta incorreto. Tente novamente.");
        return 1; // encerra o programa se algum valor for inválido
    }
    
    if((x < (y + z)) && (y < (x + z)) && (z < (x + y))){ // verifica se os valores formam um triângulo
        if(x == y && y == z){ // verifica se os lados são iguais
            printf("Trata - se de um triangulo equilatero");
        }
        else if((x != y && x != z) && (y != z)){ // verifica se os lados são diferentes
            printf("Trata - se de um triangulo escaleno");
        } else { // caso não atenda as condições anteriores, é um triângulo isósceles
            printf("Trata - se de um triangulo isoscele");
        }
    } else { // caso os valores não formem um triângulo
        printf("Os valores informados nao formam um triangulo");
    }
    
     return 0;
}