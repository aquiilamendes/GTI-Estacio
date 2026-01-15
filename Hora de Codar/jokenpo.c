#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escolhaUsuario, escolhaComputador;
    srand(time(0));

    printf("Jokenpo - Pedra, Papel ou Tesoura\n");
    printf("Escolha uma opcao:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolhaUsuario);

    escolhaComputador = rand() % 3 + 1;

    switch (escolhaUsuario)
    {
    case 1: // Pedra
        printf("Jogador: Pedra - ");
        break;
    case 2: // Papel
        printf("Jogador: Papel - ");
        break;
    case 3: // Tesoura
        printf("Jogador: Tesoura - ");
        break;    
    default:
        printf("Escolha invalida!\n");
        break;
    }

        switch (escolhaComputador)
    {
    case 1: // Pedra
        printf("Computador: Pedra\n");
        break;
    case 2: // Papel
        printf("Computador: Papel\n");
        break;
    case 3: // Tesoura
        printf("Computador: Tesoura\n");
        break;
    }

    if (escolhaComputador == escolhaUsuario)
    {
       printf("Empate!\n");
    } else if ((escolhaUsuario == 1 && escolhaComputador == 3) ||
               (escolhaUsuario == 2 && escolhaComputador == 1) ||
               (escolhaUsuario == 3 && escolhaComputador == 2))
    {
        printf("Parabéns, você ganhou!\n");
    }
    else
    {
        printf("Oops, você perdeu!\n");
    }    

    return 0;
}