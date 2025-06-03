#include <stdio.h>
#include <string.h>

int main() {
    int nota; // variável para armazenar a nota do aluno
    char nome[50]; // variável para armazenar o nome do aluno

    printf("Digite o nome do aluno: "); // solicita o nome do aluno
    fgets(nome, sizeof(nome), stdin); // lê o nome do aluno
    nome[strcspn(nome, "\n")] = 0;

    printf("Digite a nota do aluno(0 a 100): "); // solicita a nota do aluno
    scanf("%d", &nota);

    if (nota < 0 || nota > 100) { // verifica se a nota está fora do intervalo permitido
        printf("Por favor insira uma nota valida\n");
        return 1;
    }

    if (nota >= 0 && nota <= 49){ // verifica se a nota é insuficiente
        printf("O aluno %s teve nota %d. Insuficiente\n", nome, nota);
    }
    if (nota >= 50 && nota <= 64){ // verifica se a nota é regular
        printf("O aluno %s teve nota %d. Regular\n", nome, nota);
    }
    if (nota >= 65 && nota <= 84){ // verifica se a nota é boa
        printf("O aluno %s teve nota %d. Bom\n", nome, nota);
    }
    if (nota >= 85 && nota <= 100){ // verifica se a nota é ótima
        printf("O aluno %s teve nota %d. Otimo\n", nome, nota);
    }



    return 0;
}
