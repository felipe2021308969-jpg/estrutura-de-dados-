#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;   
    int n, i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n); // Vai ler o tamanho que o usuario quer

    vetor = (int *) malloc(n * sizeof(int)); // aloca o tamanho que o usuario digitou
    if (vetor == NULL) { // se for um valor não inteiro vai dar errado
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    printf("Digite %d numeros inteiros:\n", n);
    for (i = 0; i < n; i++) { //faz a função do for de acordo com o espaço alocado 
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Os numeros digitados foram:\n");
    for (i = 0; i < n; i++) { // imprime os numeros em ordem de digitaçao
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor); // Limpa a memoria

    return 0;
}
