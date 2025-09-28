#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int i;

    vetor = (int *) malloc(5 * sizeof(int)); // alocou 5 espaços

    printf("Digite 5 numeros inteiros:\n");
    for (i = 0; i < 5; i++) { // faz a função do for de acordo com o espaço alocado antes q no caso é fixo 5
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Os numeros digitados foram:\n");
    for (i = 0; i < 5; i++) { // vai imprirmir os numeros em ordem de digitaçao
        printf("%d ", vetor[i]);
    }

    free(vetor); // Libera a memoria

    return 0;
}
