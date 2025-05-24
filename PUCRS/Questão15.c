#include <stdio.h>

int main(){
    int num, i = 1; // variavel 'num' para armazenar o numero digitado e 'i' para contar quantos numeros foram digitados
    int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0; // variaveis contadoras para cada intervalo

   while (1)
   {
   
    printf("(%d)Digite o numero: ", i); // imprime o numero do loop atual e pede o número
    scanf("%d", &num);

    if (num < 0)
    {
        printf("\n\nNumero negativo, encerrando o programa...\n\n"); // imprime a mensagem de encerramento do loop
        break;
    }
    
    
    if (num >= 0 && num <= 25) // verifica o intervalo do número digitado
    {
        cont1++;
    }
    else if (num >= 26 && num <= 50) // verifica o intervalo do número digitado
    {
        cont2++;
    }
    else if (num >= 51 && num <= 75) // verifica o intervalo do número digitado
    {
        cont3++;
    }
    else if (num >= 76 && num <= 100) // verifica o intervalo do número digitado
    {
        cont4++;
    }
    
    i++; // incrementa o contador de números digitados
   }

   printf("Intervalo [0-25]: %d\n", cont1); // imprime a quantidade de números no intervalo [0-25]
   printf("Intervalo [26-50]: %d\n", cont2); // imprime a quantidade de números no intervalo [26-50]
   printf("Intervalo [51-75]: %d\n", cont3); // imprime a quantidade de números no intervalo [51-75]
   printf("Intervalo [76-100]: %d\n", cont4); // imprime a quantidade de números no intervalo [76-100]
   
    

    
    return 0;
}