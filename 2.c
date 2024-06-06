#include <stdio.h>
#include <stdlib.h>

int main() {
    int num[10];
    int contdiv = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &num[i]);

        if (num[i] % 5 == 0 && num[i] % 3 == 0) {
            contdiv++;
        }
    }

    printf("Quantidade de numeros divisiveis por 5 e por 3 ao mesmo tempo: %d\n", contdiv);
    return 0;
}