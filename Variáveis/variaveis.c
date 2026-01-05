#include <stdio.h>
/* 
int main(){
    int idade = 33;
    float altura = 1.67;
    float peso = 78.2;
    char letra = 'A';
    char nome[50] = "Áquila";

    printf("A idade de %s é: %d\n", nome, idade);
    printf("A altura de %s é: %.2fm e ele possui um peso de aproximadamente: %.2f kg\n", nome, altura, peso);
    printf("E a letra inicial do seu nome é: %c\n", letra);
    
    return 0;
}
*/

int main(){
    int idade;
    float altura, peso;
    char nome[50];
    
    printf("Olá, digite o seu nome: ");
    scanf("%s", &nome);
    printf("Seja bem-vindo %s\n", nome);

    printf("Agora por favor, qual é a sua idade? ");
    scanf("%d", &idade);
    printf("A idade de %s é: %d\n", nome, idade);

    printf("Qual é a sua altura? ");
    scanf("%f", &altura);
    printf("A altura de %s é: %.2fm\n", nome, altura);

    printf("Agora qual é o seu peso? ");
    scanf("%f", &peso);
    printf("O peso de %s é: %.2f kg\n", nome, peso);
    
    return 0;
}