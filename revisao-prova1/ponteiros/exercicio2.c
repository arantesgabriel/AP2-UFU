#include <stdio.h>

int main2() {

    int numInteiro = 1;
    double numReal = 10.5;
    char caractere = 'c';

    int *pInteiro;
    double *pReal;
    char *pCaractere;

    pInteiro = &numInteiro;
    pReal = &numReal;
    pCaractere = &caractere;

    printf("Inteiro inicial: %d, Real inicial: %f, Caractere inicial: %c\n", numInteiro, numReal, caractere);

    *pInteiro = 30;
    *pReal = 334.33;
    *pCaractere = 'f';

    printf("Inteiro final: %d, Real final: %f, Caractere final: %c", numInteiro, numReal, caractere);

    return 0;
}
