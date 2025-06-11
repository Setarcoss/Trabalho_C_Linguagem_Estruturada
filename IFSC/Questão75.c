#include <stdio.h>

int main() {
    int data;       
    printf("Digite a data no formato DDMMAAAA: ");
    scanf("%d", &data);

    int dia = data / 1000000; // extrai os dois primeiros dígitos como dia
    int mes = (data / 10000) % 100; // extrai os dois dígitos seguintes como mês
    
    if ((mes == 3 && dia >= 20) || (mes == 4) || (mes == 5) || (mes == 6 && dia < 21)) { // verifica se a data corresponde ao outono
        printf("Outono\n");
    } else if ((mes == 6 && dia >= 21) || (mes == 7) || (mes == 8) || (mes == 9 && dia < 23)) { // verifica se a data corresponde ao inverno
        printf("Inverno\n");
    } else if ((mes == 9 && dia >= 23) || (mes == 10) || (mes == 11) || (mes == 12 && dia < 21)) { // verifica se a data corresponde à primavera
        printf("Primavera\n");
    } else { // caso contrário, é verão
        printf("Verao\n");
    }

    return 0;
}