#include <stdio.h>

int main(){
    
    char sexo; // variavel para armazenar o sexo
    int idade, cont = 0; // variavel para armazenar a idade e contador de cadastros
    int ate100F = 0; // variavel para contar quantas mulheres recebem ate 100 reais
    int maioridade = 0, menoridade = 0; // variaveis para armazenar a maior e menor idade do grupo
    float mediasalario, somasalario = 0; // variaveis para armazenar a media e soma dos salarios 
    int  salario; // variavel para armazenar o salario
 
    while (1) // loop infinito para o cadastro dos dados
    {
        printf("Digite o sexo 'M' ou 'F': " ); // solicita o sexo
        scanf(" %c", &sexo);
        
        if ((sexo != 'M' && sexo != 'm') && (sexo != 'F' && sexo != 'f')) // verifica se o sexo digitado é valido
        {
            printf("Sexo invalido. Tente novamente.\n"); // se o sexo digitado for invalido, solicita novamente
            continue; // volta para o inicio do loop
        }
            printf("\nInforme a idade: "); // solicita a idade
            scanf("%d", &idade);
            
            if (idade < 0) // verifica se a idade digitada é negativa
            {
                printf("\nPesquisa encerrada.\n"); // se a idade for negativa, encerra a pesquisa
                break; // sai do loop
            }
            
            if (idade > maioridade) // verifica se a idade digitada é a maior
            {
                maioridade = idade; // se for, armazena na variavel maioridadeM
            }
            if(idade < menoridade || menoridade == 0) // verifica se a idade digitada é a menor
            {
                menoridade = idade; // se for, armazena na variavel menoridadeM
            }

            printf("Informe o salario: "); // solicita o salário
            scanf("%d", &salario); 

            somasalario += salario; // soma o salário digitado na variavel 'somaSalario' 
    
            if ((sexo == 'F' || sexo == 'f') && (salario <= 100)) // verifica se o sexo digitado é feminino e o salário é de até 100 reais
            {
            ate100F++; // incrementa o contador de mulheres que recebem ate 100 reais
            }   

            printf("\n\n"); // linha em branco para separar os cadastros
            cont++; // incrementa o contador de cadastros
        }
            
            mediasalario = (float)somasalario / cont; // calcula a media do salario do grupo
            
    

    printf("\n\nRESULTADO DA PESQUISA.\n\n"); // imprime o resultado da pesquisa

    printf("Media de salario: %.2f\n", mediasalario); // imprime a media do salario do grupo
    printf("Maior idade do grupo: %d\n", maioridade); // imprime a maior idade do grupo
    printf("Menor idade do grupo: %d\n", menoridade); // imprime a menor idade do grupo
    printf("Quantidade de mulheres que recebem ate 100 reais: %d\n", ate100F); // imprime a quantidade de mulheres que recebem ate 100 reais

    return 0;
   }