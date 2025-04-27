#include <stdio.h>

int main() {
    
    int cont = 0; // contador para o loop
    int n, num;// número de valores e número a ser lido
    float media = 0, soma = 0;// média e soma dos números
    int positivo = 0, negativo = 0;// contadores de positivos e negativos
    float percepositivo, percenegativo;// porcentagens de positivos e negativos
    
    do
    {
        printf("\n\nInforme o numero: "); // leitura do número
        scanf("%d", &num);
        
        if(num != 0 && num > 0) // verifica se o número é positivo
        {
            positivo++; // incrementa o contador de positivos
        }
        if(num < 0) // verifica se o número é negativo
        {
             negativo++; // incrementa o contador de negativos
        }
        
        soma += num; // soma os números lidos
        cont++; // incrementa o contador de números lidos

    } while (num != 0); // continua até que o número 0 seja lido
        
    if (cont > 0)
    {
        media = soma / cont; // calcula a média dos números lidos
    }
    
        percepositivo = ((float)positivo / cont) * 100; // calcula a porcentagem de positivos
        percenegativo = ((float)negativo / cont) * 100;//  calcula a porcentagem de negativos
        
        printf("\nMedia dos valores -> %.2f\n", media); //  imprime a média
        printf("\nQuantidade de valores positivos -> %d\n", positivo); // imprime a quantidade de positivos
        printf("%.2f%% dos valores sao positivos.\n\n", percepositivo); // imprime a porcentagem de positivos
        printf("\nQuantidade de valores negativos -> %d\n", negativo); // imprime a quantidade de negativos
        printf("%.2f%% dos valores sao negativos.\n", percenegativo); // imprime a porcentagem de negativos
        
    
    return 0;
    
}
