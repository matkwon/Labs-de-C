// Configurações do mutirão. Não mexer.
#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa6.c"

#include <stdio.h>

// TODO implemente seu programa aqui
int main() {

    int n;
    printf("Digite um numero maior que 1: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        if (i%3 == 0 && i%5 == 0) {
            printf("\npor três e por cinco");
        } else if (i%3 == 0) {
            printf("\napenas por três");
        } else if (i%5 == 0) {
            printf("\napenas por cinco");
        } else {
            printf("\nnenhum");
        }
    }

    return 0;
}
