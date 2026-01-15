#include <stdio.h>

int main(){

    //Variaveis para armazenar informações de produtos em um inventário
    char produtoA[50] = "Produto A";
    char produtoB[50] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float precoA = 10.50;
    float precoB = 20.75;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    //Exibir informações dos produtos
    printf("Produto %s tem estoque de %u unidades, preco unitario de R$ %.2f\n", produtoA, estoqueA, precoA);
    printf("Produto %s tem estoque de %u unidades, preco unitario de R$ %.2f\n", produtoB, estoqueB, precoB);

    //Comparação com o valor minimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O estoque do %s esta acima do minimo? %d\n", produtoA, resultadoA);
    printf("O estoque do %s esta acima do minimo? %d\n", produtoB, resultadoB);

    //Comparação entre os valores totais dos produtos
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d\n", estoqueA * precoA, estoqueB * precoB, (estoqueA * precoA) > (estoqueB * precoB));

    return 0;
}