#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int p = 0;
    // p: n�mero de pessoas
    int filho = 0, somafilho = 0;
    float mediafilho, mediasalario;
    float salario, somasalario = 0, maiorsalario = 0, ate100 = 0, percate100;
    // filho, somafilho, mediafilho: quantidade de filhos, sua soma e sua media
    // salario: salario informado
    // somasalario: calcula a soma de todos os salarios 
    // maiorsalario: exibe o maior salario
    // ate100: armazena quantas pessoas ganham at� R$100
    // percate100: percentual de pessoas que ganham at� R$100

    printf("Informe os dados"); // inicia a pesquisa

    while (1) { // loop para repetir enquanto o sal�rio for positivo
        printf("\n\nPessoa %d\n", p + 1); // exibe o n�mero da pessoa

        printf("\nSalario: ");
        scanf("%f", &salario); // l� o sal�rio 

        if (salario < 0) { // interrompe a coleta de dados quando o sal�rio for negativo
            printf("Pesquisa encerrada\n\n"); break;
        }

        printf("Quantidade de filhos: ");
        scanf("%d", &filho); // l� a quantidade de filhos

        somasalario = somasalario + salario; // soma todos os sal�rios
        somafilho = somafilho + filho; // soma a quantidade total de filhos

        if (salario > maiorsalario) { // verifica se o sal�rio informado � maior que o registrado
            maiorsalario = salario;
        }
        if (salario <= 100) { // conta quantas pessoas ganham at� R$100 por m�s
            ate100++;
        }

        p++; // conta pessoa com sal�rio v�lido

    }

    mediasalario = somasalario / p; // calcula a m�dia salarial
    mediafilho = (float)somafilho / p; // calcula a m�dia de filhos

    percate100 = (ate100 / p) * 100; // calcula a porcetagem de pessoas que ganham at� R$100,00

    // exibe os resultados da pesquisa
    printf("\nDe acordo com a pesquisa:\n");
    printf("\nMedia salarial R$%.2f", mediasalario);
    printf("\nQuantidade de filhos por pessoa %.1f ", mediafilho);
    printf("\nMaior salario: R$%.2f ", maiorsalario);
    printf("\nCerca de %.2f%% da populacao ganha ate R$100,00 por mes.\n ", percate100);

    return 0;
}
