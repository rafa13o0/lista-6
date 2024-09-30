#include <stdio.h>
#include <string.h>

int main() {
    char str;
    int tamanho;

    printf("Digite uma string (máximo 100 caracteres): ");
    fgets(str, 101, stdin);

    str[strcspn(str, "\n")] = '\0';

    tamanho = strlen(str);

    printf("String invertida: ");
    for (int i = tamanho - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}

