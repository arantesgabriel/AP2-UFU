#include <stdio.h>

int main3() {

    float matriz[3][3];
    int *pMatriz = &matriz[0][0];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%p ", pMatriz);
            pMatriz++;
        }
        printf("\n");
    }

    return 0;
}
