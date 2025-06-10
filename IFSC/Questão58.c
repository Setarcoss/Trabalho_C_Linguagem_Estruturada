#include <stdio.h>

float media_ponderada(float notas[], float maiornota, int peso, int maiorpeso) {
        float soma = 0;
        
        if(maiornota == notas[0]) {
            soma = (notas[1] * peso) + (notas [2] * peso) + (maiornota * maiorpeso);
        } 
        else if(maiornota == notas[1]) {
            soma = (notas[0] * peso) + (notas [2] * peso) + (maiornota * maiorpeso);
        } else {
            soma = (notas[0] * peso) + (notas [1] * peso) + (maiornota * maiorpeso);
        }

        return soma / ((peso*2) + maiorpeso);
    }

int main() {
    int cod; // variável para armazenar o código do aluno
    float media; // variável para armazenar a média ponderada
    float notas[3], maiornota;  // vetor para armazenar as notas do aluno e a maior nota
    int peso = 3, maiorpeso = 4; // pesos das notas e o maior peso

    printf("Digite o codigo do aluno: "); // solicita o código do aluno
    scanf("%d", &cod);
    printf("Digite a primeira nota: "); // solicita a primeira nota
    scanf("%f", &notas[0]);
    maiornota = notas[0]; // inicializa a maior nota com a primeira nota
    printf("Digite a segunda nota: "); // solicita a segunda nota
    scanf("%f", &notas[1]);
    if(notas[1] > maiornota) { // verifica se a segunda nota é maior que a maior nota atual
        maiornota = notas[1];
    }
    printf("Digite a terceira nota: "); // solicita a terceira nota
    scanf("%f", &notas[2]);
    if(notas[2] > maiornota) { // verifica se a terceira nota é maior que a maior nota atual
        maiornota = notas[2];
    }

    media = media_ponderada(notas, maiornota, peso, maiorpeso); // atribui a variável 'media' ao resultado da função 'media_ponderada'

    if(media >= 5.0){ // se a média for maior ou igual a 5.0, o aluno é aprovado
        printf("O aluno (%d) foi  aprovado com media: %.2f\n", cod, media);
    } else { // caso contrário, o aluno é reprovado
        printf("O aluno (%d) foi reprovado com media: %.2f\n", cod, media);
    }

    return 0;
}

    