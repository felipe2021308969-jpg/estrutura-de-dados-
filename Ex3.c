#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;   // ponteiro para o vetor
    int n, i;
    int pares = 0, impares = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n); // Vai ler o tamanho que o usuario quer

    vetor = (int *) malloc(n * sizeof(int)); // aloca o tamanho que o usuario digitou
    if (vetor == NULL) { // se for um valor não inteiro vai dar errado
        printf("Erro ao alocar memoria.\n");
        return 1; 
    }

    printf("Digite %d numeros inteiros:\n", n);
    for (i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) // se o resto da divisão dos numeros for 0 é par, senão é impar
            pares++;
        else
            impares++;
    }

    printf("\nNumeros pares: %d\n", pares);
    printf("Numeros impares: %d\n", impares);

    free(vetor);

    return 0;
}
