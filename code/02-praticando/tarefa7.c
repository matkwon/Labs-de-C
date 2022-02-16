// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa7.c"

#include <stdio.h>

// TODO implemente seu programa aqui
int main() {
    int a;

    printf("Altura da arvore: ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        int spaces = a-i;
        int sides = i-1;
        for (int s = 0; s < spaces; s++) {
            printf(" ");
        }
        for (int s = 0; s < sides; s++) {
            printf("/");
        }
        printf("|");
        for (int s = 0; s < sides; s++) {
            printf("\\");
        }
        printf("\n");
    }

    return 0;
}
