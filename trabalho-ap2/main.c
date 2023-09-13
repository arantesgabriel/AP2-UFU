#include <stdio.h>
#include <stdlib.h>

#define N 10

int main() {

    int listaSuditos[N];
    int listaFinalSuditos[N];
    int *pSuditos;
    int *pConvidadosFinais;

    int contador = 0;

    pSuditos = listaSuditos;
    pConvidadosFinais = listaFinalSuditos;

    int M; // Número de turnos.
    int Ti; // Número randômico gerado.

    for (int i = 0; i < N; ++i) {
        *(pSuditos + i) = i + 1;
        // printf("%d ", *(pSuditos + i)); // Verificando se a lista foi preenchida.
    }

    printf("Informe o numero de turnos:\n");
    scanf("%d", &M);

//    Teste inserindo o contador manualmente.
//    printf("Digite o contador\n");
//    scanf("%d", &contador);

    for (int i = 0; i < M; ++i) {
        Ti = 5;

        if (*(pSuditos + i) % Ti != 0) {
            *(pConvidadosFinais + i) = *(pSuditos + i);
            contador = contador + 1;
            printf("%d\n", contador);
        }
    }

    // Teste printando a lista final sem validação alguma.
    printf("Lista Final:\n");
    for (int i = 0; i < contador; ++i) {
        printf("%d\n", *(pConvidadosFinais + i));
    }


/*    if (contador > 10000) {

        for (int i = 0; i < 10000; ++i) {
            printf("%d\n", *(pConvidadosFinais + i));
        }

    } else
        for (int i = 0; i < contador; ++i) {
            printf("%d\n", *(pConvidadosFinais + i));
        }*/


    return 0;

}
