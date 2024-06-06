#include <stdio.h>
#include <stdlib.h>

void tabuada(int numero) {
    printf("tabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main() {
    int num;

    
    printf("digite um numero para calcular a tabuada: ");
    scanf("%d", &num);

    
    tabuada(num);

    return 0;
}
