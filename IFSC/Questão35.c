#include <stdio.h>

int main (){

    char nome[50]; // variável para armazenar o nome do candidato
    float nota1, nota2, nota3, media; // variáveis para armazenar as notas e a média

    printf("Digite o nome do candidato: "); // solicita o nome do candidato
    fgets(nome, sizeof(nome), stdin); // lê o nome do candidato
    nome[strcspn(nome, "\n")] = '\0'; // remove o caractere de nova linha

    printf("Digite a nota de Portugues: "); // solicita a nota de Português
    scanf("%f", &nota1);
    printf("Digite a nota de Matematica: "); // solicita a nota de Matemática
    scanf("%f", &nota2);
    printf("Digite a nota de Conhecimentos Gerais: "); // solicita a nota de Conhecimentos Gerais
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3; // calcula a média

    if (media >= 7 && nota1 >= 5 && nota2 >= 5 && nota3 >= 5) { // verifica se o candidato foi aprovado
        printf("O candidato %s aprovado com media %.2f\n", nome, media); // imprime o resultado
    } else { // se não foi aprovado
        printf("O candidato %s reprovado com media %.2f\n", nome, media);// imprime o resultado
    }
    
    return 0;
}