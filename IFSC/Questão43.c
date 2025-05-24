#include <stdio.h>
#include <string.h>

int main() {

    char nome[50], categoria; // declarando variaveis para nome e categoria
    float salario, aumento, salarioReajustado; // declarando variáveis para salario, aumento e salário reajustado
    
       
    while (1) // loop infinito
    {
        printf("Digite o nome do funcionario(deixe em branco e tecle 'enter' para sair): "); // solicita o nome do funcionário
        fgets(nome, sizeof(nome), stdin); // lê o nome do funcionario
        nome[strcspn(nome, "\n")] = 0; // remove o '\n' do final da string

        if (nome[0] == '\0') { // se o usuário apertar 'enter' sem digitar nada, o loop é encerrado
            printf("Encerrando loop..\n");
            break; 
        }
        

        printf("Digite a categoria do funcionario: "); // solicita a categoria do funcionário
        scanf(" %c", &categoria);
        
        // verifica a categoria e atribui o aumento correspondente
        if (categoria == 'A' || categoria == 'C' || categoria == 'F' || categoria == 'H') {
            aumento = 0.10;
        } else if (categoria == 'B' || categoria == 'D' || categoria == 'E' || categoria == 'I' || categoria == 'J' || categoria == 'T') {
            aumento = 0.15;
        } else if (categoria == 'K' || categoria == 'R') {
            aumento = 0.25;
        } else if (categoria == 'L' || categoria == 'M' || categoria == 'N' || categoria == 'O' || categoria == 'P' || categoria == 'Q' || categoria == 'S') {
            aumento = 0.35;
        } else if (categoria == 'U' || categoria == 'V' || categoria == 'X' || categoria == 'Y' || categoria == 'W' || categoria == 'Z') {
            aumento = 0.50;
        } else { // se a categoria não for válida, exibe mensagem de erro
            printf("Categoria invalida.\n");
            return 1;
        }
        
        printf("Digite o salario do funcionario: "); // solicita o salario do funcionario
        scanf("%f", &salario);
                
        salarioReajustado = salario + (salario * aumento); // calcula o salario reajustado


        printf("-----%s-----\n", nome); // imprime o nome do funcionario
        printf("Categoria: %c\n", categoria); // imprime a categoria do funcionario
        printf("Antigo salario: %.2f\n", salario); // imprime o salário antes do reajuste
        printf("Salario reajustado: %.2f\n", salarioReajustado); // imprime o salário reajustado do funcionário
        printf("------------------------\n\n"); // imprime uma linha para separar os dados de cada funcionário
        
        getchar(); // Limpa o buffer do teclado
    }
    
    return 0;
}