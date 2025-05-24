#include <stdio.h>

int main(){
    float salario; // variável para armazenar o salário bruto
    float previdencia, imposto; // variável para armazenar o salário após desconto da previdência e do imposto
   
    printf("Salario bruto: "); // solicita ao usuário o salário bruto
    scanf("%f", &salario);
  
    previdencia = salario - (salario * 0.10); // calcula o salário após desconto da previdência
    imposto = previdencia - (previdencia * 0.05); // calcula o salário após desconto do imposto
    printf("Salario liquido: %.2f\n", imposto); // imprime o salário líquido
    
    
    return 0;
}