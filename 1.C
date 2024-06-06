#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int contpar = 0, contimpar = 0;
    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            contpar++;
        } else {
            contimpar++;
        }
    }
    printf("Quantidade de elementos pares: %d\n", contpar);
    printf("Quantidade de elementos impares: %d\n", contimpar);

    return 0;
}
