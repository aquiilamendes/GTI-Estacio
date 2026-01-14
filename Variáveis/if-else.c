#include <stdio.h>
    int main() {
        float temperatura, umidade;
        unsigned int estoque, estoqueMinimo = 100;

        printf("Digite a temperatura atual: ");
        scanf("%f", &temperatura);
        printf("Digite a umidade atual: ");
        scanf("%f", &umidade);
        printf("Digite o estoque atual: ");
        scanf("%u", &estoque);

        if (temperatura > 30) {
            printf("A temperatura está alta \n");
        } else {
            printf("A temperatura está normal \n");
        }

        if (umidade > 50) {
            printf("A umidade está alta \n");
        } else {
            printf("A umidade está normal \n");
        }

        if (estoque < estoqueMinimo) {
            printf("Estoque abaixo do mínimo \n");
        } else {
            printf("Estoque normal! \n");
        }
    }