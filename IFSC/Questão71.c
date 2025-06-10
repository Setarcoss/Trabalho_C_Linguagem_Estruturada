#include <stdio.h>
#include <string.h>

int verificadorCategoria(int idade) { // função para verificar a categoria do atleta
    if(idade >= 5 && idade <= 10) {
        printf("Categoria: Infantil\n");
    }
    else if(idade >= 11 && idade <= 15) {
        printf("Categoria: Juvenil\n");
    }
    else if(idade >= 16 && idade <= 20) {
        printf("Categoria: Junior\n");
    }
    else if(idade >= 21 && idade <= 25) {
        printf("Categoria: Profissional\n");
    }
    else { // caso a idade não se encaixe em nenhuma categoria
        printf("Categoria: Nao se encaixa em nenhuma categoria\n");
    }
    return 0;
}



int main(){ // função principal
 char nome[50]; // vetor para armazenar o nome do atleta
     printf("Digite o nome do(a) atleta: ");
     fgets(nome,sizeof(nome), stdin);
     nome[strcspn(nome, "\n")] = 0; // remove o caractere de nova linha do final da string

 int idade; // variável para armazenar a idade do atleta
     printf("Digite a idade do(a) atleta: ");
     scanf("%d", &idade);

    verificadorCategoria(idade); // chama a função para verificar a categoria do atleta
    
    
    return 0;
}