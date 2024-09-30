#include <stdio.h>
#include <string.h>

int calcular_tamanho(char str[]) {
    int tamanho = 0;
    while (str[tamanho] != '\0') {
        tamanho++;
    }
    return tamanho;
}

int main() {
    char str;

    printf("Digite uma string (máximo 100 caracteres): ");
    fgets(str, 101, stdin);

    str[strcspn(str, "\n")] = '\0';

    int tamanho_strlen = strlen(str);
    int tamanho_manual = calcular_tamanho(str);

    printf("Tamanho calculado com strlen: %d\n", tamanho_strlen);
    printf("Tamanho calculado manualmente: %d\n", tamanho_manual);

    if (tamanho_strlen == tamanho_manual) {
        printf("Os dois métodos retornaram o mesmo resultado.\n");
    } else {
        printf("Os dois métodos retornaram resultados diferentes.\n");
    }

    return 0;
}

