#include <stdio.h>

int main() {
    
    char sexo; // variável para armazenar o sexo
    int cont = 0; // contador para mulheres entre 18 e 35 anos com cabelo louro e olhos verdes
    int olho, cabelo; // variáveis para armazenar a cor dos olhos e cabelo
    int idade, maioridade = 0; // variáveis para armazenar a idade e a maior idade informada
    int loiro = 0, castanho = 0, preto = 0; // contadores para as cores de cabelo
    int azuis = 0, verdes = 0, castanhos = 0; // contadores para as cores de olhos

    while(1) // loop infinto 
    {
        printf("Idade: "); // solicita a idade
        scanf(" %d", &idade); // lê a idade
        
        if(idade == -1) // se a idade foi -1 encerra o loop
        {
            printf("\nPesquisa encerrada.\n"); // mensagem de encerramento
            break; // encerra o loop
        }
        
        if(idade > maioridade) // verifica se a idade informada é maior que a 'maioridade'
        {
            maioridade = idade; // atualiza a maioridade
        }
        
        printf("\nInforme o sexo (m/f): "); // solicita o sexo
        scanf(" %c", &sexo); // lê o sexo
        
        if (sexo != 'm' && sexo != 'f') // verifica se o sexo é válido
        {
            printf("\nSexo inválido. Tente novamente.\n");
            continue; // se inválido, reinicia o loop
        }
        
        printf("\nCor dos olhos(1-azuis, 2-verdes, 3-castanhos): "); // solicita a cor dos olhos
        scanf("%d", &olho); // lê a cor dos olhos
        
        if(olho < 1 || olho > 3) // verifica se a cor dos olhos é válida
        {
            printf("\nPor favor informe um valor valido.\n");
            continue; // se inválido, reinicia o loop
        }
        switch(olho) // verifica a cor dos olhos e incrementa o contador correspondente
        {
            case 1:
            azuis++; break; // incrementa o contador de olhos azuis
            case 2:
            verdes++; break; // incrementa o contador de olhos verdes
            case 3:
            castanhos++; break; // incrementa o contador de olhos castanhos
        }
        
        
        printf("\nCor dos cabelos(1-louros, 2-castanhos, 3-pretos): " ); // solicita a cor do cabelo
        scanf("%d", &cabelo); // lê a cor do cabelo
        if(cabelo < 1 || cabelo > 3) // verifica se a cor do cabelo é válida
        {
            printf("\nPor favor informe um valor valido.\n"); 
            continue; // se inválido, reinicia o loop
        }
        
        switch(cabelo) // verifica a cor do cabelo e incrementa o contador correspondente
        {
            case 1:
            loiro++; break; // incrementa o contador de cabelo louro
            case 2:
            castanho++; break; // incrementa o contador de cabelo castanho  
            case 3:
            preto++; break; // incrementa o contador de cabelo preto
        }
        
        if((sexo == 'f') && (idade >= 18 && idade <= 35) && (cabelo == 1 && olho == 2)) // verifica se é mulher entre 18 e 35 anos com cabelo louro e olhos verdes
        {
            cont++; // incrementa o contador de mulheres com cabelo louro e olhos verdes
        }
        
        printf("\n\n"); // imprime uma linha em branco para separar as entradas
        
    }
    
          printf("\nA maior idade informada foi -> %d anos", maioridade); // imprime a maior idade informada
          printf("\n%d mulheres entre 18 e 35 anos possuem olhos verdes e cabelos louros.", cont); // imprime o número de mulheres entre 18 e 35 anos com cabelo louro e olhos verdes
    
    
    return 0;
}