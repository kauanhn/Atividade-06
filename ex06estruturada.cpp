#include <stdio.h>
#include <string.h>
#include <ctype.h>

void referencia(char nome[]) {
    int i, j, tam;
    char sobrenome[20], inicial[2];
    
    tam = strlen(nome);
    for (i = tam-1; i >= 0; i--) {
        if (nome[i] == ' ') {
            strcpy(sobrenome, nome+i+1);
            break;
        }
    }
    
    printf("%s ", strupr(sobrenome));
    
    inicial[0] = toupper(nome[0]);
    inicial[1] = '.';
    printf("%c. ", inicial[0]);
   
    printf("%c. ", toupper(nome[i-5]));

}
int main() {
    char nome[50];
    
    printf("Digite um nome completo: ");
    fgets(nome, 50, stdin);
    referencia(nome);
    
    return 0;
}
