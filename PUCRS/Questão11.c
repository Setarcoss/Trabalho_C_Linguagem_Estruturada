#include <stdio.h>

int main(){

    int num = 1, somapar = 0; // variável para o número digitado 'num' e a soma dos valores par 'somapar' 
    int contpar = 0; // variável para o contador
    float media = 0; // variável para o cálculo da média 
    

    while (num != 0) // incia o loop e só para quando o número digitado for 0 
    {
        printf("Digite o valor: "); // pede para que o usuário informe o valor
        scanf("%d", &num);

        if (num%2 == 0 && num != 0) // condição para o soma dos valores pares 
        {
            somapar = somapar + num;
            contpar ++; // incrementa o contador de números pares
        }
        
    }       
        if (cont > 0) // caso algum número par tenha sido digitado a média é calculada
        {
            media = (float)somapar / contpar;

            printf("\nMedia dos numeros pares -> %.2f", media);
        }
        
       else printf("\nNenhum numero par foi digitado. \n"); // se nenhum número par tenha sido digitado, imprime esta mensagem
           
        
      

    return 0;
}