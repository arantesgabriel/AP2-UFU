#include <stdio.h>

int main() {
    int integer = 10;
    float real = 3.14;
    char character = 'A';

    int *ponteiroInt;
    float *ponteiroReal;
    char *ponteiroChar;

    ponteiroInt = &integer;
    ponteiroReal = &real;
    ponteiroChar = &character;

    printf("Valores iniciais:\n");
    printf("Integer: %d\n", integer);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", character);

    // Modificando os valores através dos ponteiros
    *ponteiroInt = 20;
    *ponteiroReal = 2.71;
    *ponteiroChar = 'B';

    printf("\nValores modificados:\n");
    printf("Integer: %d\n", integer);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", character);

    return 0;
}
