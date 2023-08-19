
#include <stdio.h>

int main()
{
    
    int variavel1;
    int variavel2;
    unsigned int tamanhov1;
    unsigned int tamanhov2;
    
    printf("Digite o valor da primeira variável\n");
    scanf("%d", &variavel1);

    printf("Digite o valor da segunda variável\n");
    scanf("%d", &variavel2);
    
    tamanhov1 = sizeof(variavel1);
    tamanhov2 = sizeof(variavel2);
    
    if (tamanhov1 > tamanhov2) {
        printf("A variável 1: %d é a maior e possue %u bytes.", variavel1, tamanhov1);
    } else {
        printf("A variável 2: %d é a maior e possue %u bytes.", variavel2, tamanhov2);
    }

    return 0;
}