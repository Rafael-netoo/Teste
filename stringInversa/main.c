#include <stdio.h>
#include <string.h>

void inverte_string(char *str) {
    int tamanho = strlen(str);
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = str[i];
        str[i] = str[tamanho - i - 1];
        str[tamanho - i - 1] = temp;
    }
}

int main() {
    char string[100];
    printf("Digite uma string(palavra): ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0'; // Remove o caractere de nova linha adicionado pelo fgets

    printf("String original: %s\n", string);

    inverte_string(string);

    printf("String invertida: %s\n", string);

    return 0;
}
