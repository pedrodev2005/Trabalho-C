#include <stdio.h>
#include <stdlib.h>

struct al {
    int matricula;
    char nome[50];
    float nota_av;
    float simulado1;
    float simulado2;
};

int main() {
    struct al al;

    printf("digite a matricula do al: ");
    scanf("%d", &al.matricula);

    printf("digite o nome do al: ");
    scanf("%s", al.nome);

    printf("digite a nota da avaliacao: ");
    scanf("%f", &al.nota_av);

    printf("digite a nota do simulado 1: ");
    scanf("%f", &al.simulado1);

    printf("digite a nota do simulado 2: ");
    scanf("%f", &al.simulado2);

    printf("\ndados do al:\n");
    printf("natricula: %d\n", al.matricula);
    printf("nome: %s\n", al.nome);
    printf("mota da avaliacao: %.2f\n", al.nota_av);
    printf("mota do simulado 1: %.2f\n", al.simulado1);
    printf("mota do simulado 2: %.2f\n", al.simulado2);

    return 0;
}
