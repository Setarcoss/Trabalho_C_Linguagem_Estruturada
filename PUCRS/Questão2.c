#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int p = 0;
    // p: número de pessoas
    int filho = 0, somafilho = 0;
    float mediafilho, mediasalario;
    float salario, somasalario = 0, maiorsalario = 0, ate100 = 0, percate100;
    // filho, somafilho, mediafilho: quantidade de filhos, sua soma e sua media
    // salario: salario informado
    // somasalario: calcula a soma de todos os salarios 
    // maiorsalario: exibe o maior salario
    // ate100: armazena quantas pessoas ganham até R$100
    // percate100: percentual de pessoas que ganham até R$100

    printf("Informe os dados"); // inicia a pesquisa

    while (1) { // loop para repetir enquanto o salário for positivo
        printf("\n\nPessoa %d\n", p + 1); // exibe o número da pessoa

        printf("\nSalario: ");
        scanf("%f", &salario); // lê o salário 

        if (salario < 0) { // interrompe a coleta de dados quando o salário for negativo
            printf("Pesquisa encerrada\n\n"); break;
        }

        printf("Quantidade de filhos: ");
        scanf("%d", &filho); // lê a quantidade de filhos

        somasalario = somasalario + salario; // soma todos os salários
        somafilho = somafilho + filho; // soma a quantidade total de filhos

        if (salario > maiorsalario) { // verifica se o salário informado é maior que o registrado
            maiorsalario = salario;
        }
        if (salario <= 100) { // conta quantas pessoas ganham até R$100 por mês
            ate100++;
        }

        p++; // conta pessoa com salário válido

    }

    mediasalario = somasalario / p; // calcula a média salarial
    mediafilho = (float)somafilho / p; // calcula a média de filhos

    percate100 = (ate100 / p) * 100; // calcula a porcetagem de pessoas que ganham até R$100,00

    // exibe os resultados da pesquisa
    printf("\nDe acordo com a pesquisa:\n");
    printf("\nMedia salarial R$%.2f", mediasalario);
    printf("\nQuantidade de filhos por pessoa %.1f ", mediafilho);
    printf("\nMaior salario: R$%.2f ", maiorsalario);
    printf("\nCerca de %.2f%% da populacao ganha ate R$100,00 por mes.\n ", percate100);

    return 0;
}
