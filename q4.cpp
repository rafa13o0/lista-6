#include <stdio.h>
#include <string.h>
#include <ctype.h>

void preprocessar_string(char str[], char str_processada[]) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalnum(str[i])) {
            str_processada[j++] = tolower(str[i]);
        }
    }
    str_processada[j] = '\0';
}

int eh_palindromo(char str[]) {
    int tamanho = strlen(str);
    for (int i = 0; i < tamanho / 2; i++) {
        if (str[i] != str[tamanho - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str;
    char str_processada;

    printf("Digite uma string (máximo 100 caracteres): ");
    fgets(str, 101, stdin);

    str[strcspn(str, "\n")] = '\0';

    preprocessar_string(str, str_processada);

    if (eh_palindromo(str_processada)) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string não é um palíndromo.\n");
    }

    return 0;
}

