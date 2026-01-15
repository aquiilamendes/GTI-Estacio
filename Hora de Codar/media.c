#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, nota5, media;

    // Solicita ao usuário que insira as notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);
    printf("Digite a quinta nota: ");
    scanf("%f", &nota5);

    // Calcula a média das notas
    media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

    // Exibe o resultado
    printf("A sua média é: %.2f\n", media);

    return 0;
}