#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int countj = 0, counta = 0, counti = 0;

    printf("Digite a quantidade de pessoas a serem entrevistadas: ");
    scanf("%d", &n);

    int idades[n];

    printf("Digite as idades das pessoas:\n");
    for (i = 0; i < n; i++) {
        printf("Idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);

        if (idades[i] >= 18 && idades[i] < 35) {
            countj++;
        } else if (idades[i] >= 35 && idades[i] < 65) {
            counta++;
        } else if (idades[i] >= 65 && idades[i] <= 80) {
            counti++;
        
        }
    }

    printf("\nQuantidade de jovens: %d\n", countj);
    printf("Quantidade de adultos: %d\n", counta);
    printf("Quantidade de idosos: %d\n", counti);

    return 0;
}
