#include <stdio.h>

int calculo(float nota[]) { // função que calcula a média
    return (nota[0] + nota[1]) / 2.0;
}

int main() { // função principal
    float nota[2], media; // vetor para armazenar as notas e variável para a média

    printf("Digite a primeira nota: "); // solicita a primeira nota
    scanf("%f", &nota[0]);
    printf("Digite a segunda nota: "); // solicita a segunda nota
    scanf("%f", &nota[1]);
       media = calculo(nota); // chama a função para calcular a média
    if (media > 5.0) { // verifica se a média é maior que 5.0
        printf("Aprovado\n");
    } else { // caso contrário, imprime "Reprovado"
        printf("Reprovado\n");
    }

    return 0;
}