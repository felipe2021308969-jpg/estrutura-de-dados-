#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // pra poder diferenciar as maiusculas das minusculas com tollower


char* alocaString(int n) { // aloca pras strings
    char *str = (char *) malloc((n + 1) * sizeof(char)); // +1 para o '\0'
    if (str == NULL) {
        printf("Erro ao alocar memoria.\n");
        exit(1); // encerra o programa caso falhe
    }
    return str;
}

int main() {
    int n, i;
    char *texto;

    printf("Digite o tamanho da string: ");
    scanf("%d", &n);
    getchar(); // tira o \n do scanf

    texto = alocaString(n); // aloca dinamicamente

    printf("Digite a string: ");
    fgets(texto, n + 1, stdin); // le o conteudo digitado

    printf("String sem vogais: ");
    for (i = 0; texto[i] != '\0'; i++) {
        char c = tolower(texto[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') { // analisa e separa as vogais
            printf("%c", texto[i]);
        }
    }
    printf("\n");

    free(texto); // libera a memoria

    return 0;
}
