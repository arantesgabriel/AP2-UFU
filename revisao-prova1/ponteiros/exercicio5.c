#include <stdio.h>

int main() {

    int array[5];
    int *pArray = array;

    for (int i = 0; i < 5; ++i) {
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", (pArray + i));
    }

    printf("Valores pares do array: ");
    for (int i = 0; i < 5; ++i) {
        if (*(pArray + i) % 2 == 0) {
            printf("%d ", *(pArray + i));
        }
    }

    return 0;
}
