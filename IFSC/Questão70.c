#include <stdio.h>
#include <string.h> // biblioteca para manipulação de strings

int main() {
 char nome1[50]; // variáveis para armazenar os nomes das pessoas
    printf("Digite o nome da primeira pessoa: "); // solicita o nome da primeira pessoa
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = 0; // remove o caractere de nova linha do final da string

 float altura1; // variável para armazenar a altura da primeira pessoa
    printf("\nDigite a altura de %s: ", nome1); 
    scanf("%f", &altura1);
    getchar(); // limpa o buffer de entrada

 float peso1; // variável para armazenar o peso da primeira pessoa
    printf("Digite o peso de %s: ", nome1);
    scanf("%f", &peso1);
    getchar(); // limpa o buffer de entrada

    printf("----------------------------------------------\n");
    
    char nome2[50]; // variável para armazenar o nome da segunda pessoa
    printf("Digite o nome da segunda pessoa: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = 0; // remove o caractere de nova linha do final da string

    float altura2; // variável para armazenar a altura da segunda pessoa
    printf("Digite a altura de %s: ", nome2);
    scanf("%f", &altura2);
    getchar(); // limpa o buffer de entrada
    
    float peso2; // variável para armazenar o peso da segunda pessoa
    printf("Digite o peso de %s: ", nome2);
    scanf("%f", &peso2);
    getchar(); // limpa o buffer de entrada

    printf("-------------------------------\n"); // linha de separação para o resultado da comparação

    if (peso1 > peso2) { // compara os pesos das duas pessoas
        printf("Pessoa mais pesada: %s\n", nome1);
    } else {
        printf("Pessoa mais pesada: %s\n", nome2);
    }

    if (altura1 > altura2) { // compara as alturas das duas pessoas
        printf("Pessoa mais alta: %s\n", nome1);
    } else {
        printf("Pessoa mais alta: %s\n", nome2);
    }

    return 0;
}
