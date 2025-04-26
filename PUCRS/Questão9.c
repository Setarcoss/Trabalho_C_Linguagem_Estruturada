#include <stdio.h>

int main()
{
    
    int cod; // variável para o código do aluno 
    int maiorpeso = 4, peso = 3; // variáveis para o peso da maior nota e das demais
    float media, nota1, nota2, nota3, maiornota = 0; // valores para; media do aluno, as três notas e o valor da maior nota

    
    while (1) // incío do loop
    { 
        printf("Codigo do aluno: ");  // solicita o código do aluno
        scanf("%d", &cod);
        
        if (cod < 0) // encerra o loop caso o código informado seja negativo
        {
                printf("Calculo encerrado.");
                break;
        }
       
        // solicita as três notas do aluno
        printf("\nInforme a primeira nota do aluno(%d): ", cod);
        scanf("%f", &nota1);
        
        printf("\nInforme a segunda nota do aluno(%d): ", cod);
        scanf("%f", &nota2);
      
        printf("\nInforme a terceira nota do aluno(%d): ", cod);
        scanf("%f", &nota3);

        maiornota = nota1; // inicialmente, a maior nota é a 'nota1'
   
        // caso nenhuma das outras duas notas seja maior que ela, a maior nota continua sendo a 'nota1'
        if (nota2 > maiornota)
        {
          maiornota = nota2;
        }
        if (nota3 > maiornota)
        {
          maiornota = nota3;
        }
        

        // executrá a fórmula da da média para cada um dos possíveis casos
        if (maiornota == nota1) // se a 'nota1' for a maior nota
        {
            media = ((maiornota * maiorpeso) + (nota2 * peso) + (nota3 * peso)) / (maiorpeso + peso + peso);
        }

        if (maiornota == nota2) //se a 'nota2' for a maior nota
        {
            media = ((maiornota * maiorpeso) + (nota1 * peso) + (nota3 * peso)) / (maiorpeso + peso + peso);
        }
        
        if (maiornota == nota3) // se a 'nota3' for a maior nota
        {
            media = ((maiornota * maiorpeso) + (nota1 * peso) + (nota2 * peso)) / (maiorpeso + peso + peso);
        }

        // com base na média, calcula se o aluno foi aprovado ou reprovado
        if (media >= 5) 
        {
            printf("\nO aluno de codigo (%d) com as notas; %.1f, %.1f, %.1f foi APROVADO com media %.1f\n\n\n", cod, nota1, nota2, nota3, media);
        }

        else
        {
            printf("\nO aluno de codigo (%d) com as notas; %.1f, %.1f, %.1f foi REPROVADO com media %.1f\n\n\n", cod, nota1, nota2, nota3, media);
        }
    }
    
    return 0;
}