#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[10];
    int referencia;
    int cont = 0;

    printf("digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor de referencia:");
    scanf("%d", &referencia);

    printf("Valores maiores que o valor de referencia %d:\n", referencia);
    for (int i = 0; i < 10; i++) {
        if (vetor[i] > referencia) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        if (vetor[i] == referencia) {
            cont++;
        }
    }
    printf("O valor de referencia %d aparece %d vezes no vetor.\n", referencia, cont);

    return 0;
}
