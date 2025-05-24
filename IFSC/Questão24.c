#include <stdio.h>

int main(){
    float velocidade; // declaração da variável 'velocidade'

    printf("Digite a velocidade em km/h: "); // solicitação de entrada ao usuário
    scanf("%f", &velocidade);

    printf("Velocidade em m/s(metros por segundo) -> %.2f\n", velocidade / 3.6); // conversão de km/h para m/s e exibição do resultado


    return 0;
}