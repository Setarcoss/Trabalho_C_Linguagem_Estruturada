#include <stdio.h>

int main() {
       float media; //variável para armazenar a media
       float nota1, nota2, nota3; // variáveis para armazenar as notas
       int peso1 = 2, peso2 = 3, peso3 = 5; // variáveis para armazenar os pesos

       printf("Digite a primeira nota: "); // solicita a primeira nota
       scanf("%f", &nota1); 
       printf("Digite a segunda nota: "); // solicita a segunda nota
       scanf("%f", &nota2);
       printf("Digite a terceira nota: "); // solicita a terceira nota
       scanf("%f", &nota3);

       media = (float)((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3); // calcula a media ponderada
       printf("Media ->: %.2f\n", media); // imprime a media       

    return 0;
}