
#include <stdio.h>

int main()
{
    int idade;
    char nome[10] = "Maria";
    double peso, altura;
    int casada;
    float grau_miopia[2];
    unsigned int tamanho_total;

    altura = 1.65;
    peso = 70;
    casada = 0;
    grau_miopia[0] = 2.75; // olho esquerdo
    grau_miopia[1] = 3; // olho direito

    tamanho_total = sizeof(idade) + sizeof(nome) + sizeof(peso) + sizeof(altura) + sizeof(casada) + sizeof(grau_miopia);
    
    printf("Tamanho total em bytes: %u", tamanho_total);

    return 0;
}
