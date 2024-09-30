#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validar_senha(char senha[]) {
    int tem_numero = 0, tem_maiuscula = 0, tem_minuscula = 0;
    int tamanho = strlen(senha);

    if (tamanho < 8 || tamanho > 100) {
        return 0; 
    }

    for (int i = 0; i < tamanho; i++) {
        if (isdigit(senha[i])) {
            tem_numero = 1;
        }
        if (isupper(senha[i])) {
            tem_maiuscula = 1;
        }
        if (islower(senha[i])) {
            tem_minuscula = 1;
        }
    }

    return tem_numero && tem_maiuscula && tem_minuscula;
}

int main() {
    char senha;
    printf("Digite a senha: ");
    scanf("%100s", senha);

    if (validar_senha(senha)) {
        printf("Senha v�lida.\n");
    } else {
        printf("Senha inv�lida. A senha deve ter:\n");
        printf("- M�nimo de 8 caracteres\n");
        printf("- Pelo menos um n�mero\n");
        printf("- Pelo menos uma letra mai�scula\n");
        printf("- Pelo menos uma letra min�scula\n");
        printf("- M�ximo de 100 caracteres\n");
    }

    return 0;
}

