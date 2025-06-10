#include <stdio.h>

int zodiaco(int dia, int mes) {
    int signo;
    if ((mes == 1 && dia >= 21) || (mes == 2 && dia <= 19)){
        signo = 1; // Aquário
    }
    else if ((mes == 2 && dia >= 20) || (mes == 3 && dia <= 20)){
        signo = 2; // Peixes
    }
    else if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 20)){
        signo = 3; // Áries
    }
    else if ((mes == 4 && dia >= 21) || (mes == 5 && dia <= 20)){
        signo = 4; // Touro
    }
    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)){
        signo = 5; // Gêmeos
    }
    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 21)){
        signo = 6; // Câncer
    }
    else if ((mes == 7 && dia >= 22) || (mes == 8 && dia <= 22)){
        signo = 7; // Leão
    }
    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)){
        signo = 8; // Virgem
    }
    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)){
        signo = 9; // Libra
    }
    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)){
        signo = 10; // Escorpião
    }
    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)){
        signo = 11; // Sagitário
    }
    else {
        signo = 12; // Capricórnio
    }
        return signo;
}

int main() {
    int dia, mes; // variáveis para armazenar o dia e o mês

    printf("Dia: "); // solicita o dia
    scanf("%d", &dia);
    printf("Mes: "); // solicita o mes
    scanf("%d", &mes);

int signo = zodiaco(dia, mes); // atribui o valor da variável 'signo' ao retorno da função 'zodiaco' 
   
    switch(signo) { // switch para definir os signos de 1 a 12
    case 1:
        printf("Voce e do seguinte signo do zodiaco: Aquario\n");
        break;
    case 2:
        printf("Voce e do seguinte signo do zodiaco: Peixes\n");
        break;
    case 3:
        printf("Voce e do seguinte signo do zodiaco: Aries\n");
        break;
    case 4:
        printf("Voce e do seguinte signo do zodiaco: Touro\n");
        break;
    case 5:
        printf("Voce e do seguinte signo do zodiaco: Gemeos\n");
        break;
    case 6:
        printf("Voce e do seguinte signo do zodiaco: Cancer\n");
        break;
    case 7:
        printf("Voce e do seguinte signo do zodiaco: Leao\n");
        break;
    case 8:
        printf("Voce e do seguinte signo do zodiaco: Virgem\n");
        break;
    case 9:
        printf("Voce e do seguinte signo do zodiaco: Libra\n");
        break;
    case 10:
        printf("Voce e do seguinte signo do zodiaco: Escorpiao\n");
        break;
    case 11:
        printf("Voce e do seguinte signo do zodiaco: Sagitario\n");
        break;
    case 12:
        printf("Voce e do seguinte signo do zodiaco: Capricornio\n");
        break;
}
    return 0;
}