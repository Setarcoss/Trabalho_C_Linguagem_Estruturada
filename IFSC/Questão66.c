#include <stdio.h>

float calculo(float salario){
    float reajuste;
    if(salario >= 1500 && salario < 1750){
        reajuste = salario + (salario * 0.12);
    }
    else if(salario >= 1750 && salario < 2000){
        reajuste = salario + (salario * 0.10);
    }
    else if(salario >= 2000 && salario < 3000){
        reajuste = salario + (salario * 0.07);
    }
    else if(salario > 3000){
        reajuste = salario + (salario * 0.05);
    }
    else{
        reajuste = salario;
    }

    return reajuste;
}

int main(){
    float salario, novoSalario;

        printf("Informe o salario do funcionario: ");
        scanf("%f", &salario);
        
        novoSalario = calculo(salario);
        
        printf("Valor com reajuste: R$%.2f", novoSalario); 



    return 0;
}