#include <stdio.h>

int main4() {

    int array[5];
    int *pArray = array;

    for (int i = 0; i < 5; ++i) {
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", (pArray + i));
    }

    for (int i = 0; i < 5; ++i) {
        printf("%d ", *(pArray + i) * 2);
    }

    return 0;
}
