/*
    Descrição: Criação de um struct para criação de data
    Assegura: A apresentação do struct
*/

#include <stdio.h>

// Definição da data
struct data
{
    int dia;
    int mes;
    int ano;
};

void escreva_data(struct data data){
    printf("%02d-%02d-%04d", data.dia, data.mes, data.ano);

}

int main(void)
{

    struct data hoje, amanha;

    hoje.dia = 2;
    hoje.mes = 6;
    hoje.ano = 2025;

    amanha = hoje;
    amanha.dia++;

    printf("Hoje: ");
    escreva_data(hoje);
    printf("\n");

    
    printf("Amanha: ");
    escreva_data(amanha);
    printf("\n");

    struct data natal = {25, 12, 2025};
    printf("Natal: ");
    escreva_data(natal);
    printf("\n");


    return 0;
}