#include <stdio.h>

int main() {
    char letra; // variável para armazenar a letra digitada

    printf("Digite uma letra do alfabeto: "); // mensagem para o usuário
    scanf(" %c", &letra);

    // verifica se a letra é uma vogal
    if ((letra == 'a' || letra == 'A') || (letra == 'e' || letra == 'E') ||  
        (letra == 'i' || letra == 'I') || (letra == 'o' || letra == 'O') || 
        (letra == 'u' || letra == 'U')) {
        printf("Vogal\n");
    } else { // se não for vogal, é consoante
        printf("Consoante\n");
    }

    return 0;
}