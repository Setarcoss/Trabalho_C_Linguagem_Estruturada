#include <stdio.h>

int main() {
    float nota[3], media; // variaveis para armazenar as notas e a media
    int opcao; // variavel para armazenar a opcao de media

    for (int i = 0; i < 3; i++) { // loop para ler as 3 notas
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &nota[i]);
    }
    printf("Digite o tipo de media(1 - aritmetica, 2 - ponderada(3, 3, 4)):\n"); // pede para o usuario escolher o tipo de media
    scanf("%d", &opcao);

    if (opcao == 1) { // se a opcao for 1, calcula a media aritmetica
        media = (nota[0] + nota[1] + nota[2]) / 3;
        printf("Media aritmetica: %.2f\n", media);
    } else if (opcao == 2) { // se a opcao for 2, calcula a media ponderada
        media = (nota[0] * 3 + nota[1] * 3 + nota[2] * 4) / (3 + 3 + 4);
        printf("Media ponderada: %.2f\n", media);
    } else {
        printf("Opcao invalida!\n"); // se a opção for diferente de 1 ou 2, exibe mensagem de erro
        }

    return 0;
}