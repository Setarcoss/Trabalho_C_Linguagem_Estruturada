#include <stdio.h>


int main(){ // inicia o loop
    
    int num, contpar = 0; // variáveis para o valor informado e para o contador de numeros par
    int somapar = 0; // variável para a soma dos valores par
    float  mediapar = 0; // variável para a media dos valores par
    
    do
    {
        printf("Informe um numero: "); // pede para que o usuário digite um número
        scanf("%d", &num);

        if (num%2 == 0 && num != 0) // caso o número seja par e diferente de 0, o valor é adicionado a 'somapar'
        {
            somapar = somapar + num;
            contpar++; // incremento para a quantidade de números par
        }
        
        
    } while (num != 0); // encerra o loop quando o número for 0
    
     if (contpar > 0) // se pelo menos um número par for digitado executa a fórmula
    {   
        mediapar = (float)somapar / contpar;
        printf("\nMedia dos valores par -> %.2f", mediapar); // imprime na tela
    } 
    else // se nenhum número par for digitado 
    {
        printf("Nenhum valor par foi informado."); // imprime na tela
    }
    
    return 0;
}
