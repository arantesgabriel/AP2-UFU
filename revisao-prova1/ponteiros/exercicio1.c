#include <stdio.h>

int main1() {

    int v1, v2;

    printf("Digite a variavel 1\n");
    scanf("%d", &v1);

    printf("Digite a variavel 2\n");
    scanf("%d", &v2);

    if (&v1 > &v2) {
        printf("\nO maior endereco eh o da variavel 1: %d\n", v1);
        printf("\nEndereco da variavel 1: %u\n", &v1);
        printf("Endereco da variavel 2: %u", &v2);

    } else {
        printf("\nO maior endereco eh o da variavel 2: %d\n", v2);
        printf("\nEndereco da variavel 1: %u\n", &v1);
        printf("Endereco da variavel 2: %u", &v2);
    }

    return 0;
}
