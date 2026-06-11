#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int vitoria=0,derrota=0,sair=0;
    int escolha=0,numero=0,computador=0;
    srand(time(NULL));
    printf("JOGO DO PAR ou IMPAR\n");
    do {
        printf("Escolha NUMERO [1]-IMPAR ou [2]-PAR:\n");
        scanf("%d",&escolha);
        printf("Muito Bem voce escolheu entre impar ou par.\nAgora me diga qual numero voce vai apostar sua sorte:\n");
        scanf("%d",&numero);
        computador = rand() % 11;
        printf("Voce apostou no numero [%d] e o computador apostou no numero [%d] \n",numero,computador);
        int soma=0;
        soma = numero + computador;
        printf("A soma dos numeros e: [%d]\n",soma);

        if (escolha == 1) {
            if(soma %2 == 0) {
                printf("Voce Perdeu\n");
                (derrota++);
            }else {
                printf("Parabens Voce venceu \n");
                (vitoria++);
            }
        }else{
            if (soma %2 == 0) {
                printf("Parabens Voce Venceu esta partida\n");
                (vitoria++);
            }else {
                printf("Voce perdeu\n");
                (derrota++);
            }
        }
        printf("*****PLACAR*****\nVitorias:[%d]  Derrotas[%d]\n",vitoria,derrota);
        printf("Deseja jogar novamente?  [1]SIM ou [2]NAO \n");
        scanf("%d",&sair);
    }while (sair==1);
    printf("*****PLACAR*****\nVitorias:[%d]  Derrotas[%d]\n",vitoria,derrota);
    printf("Voce apergou [%d]\n Fim do jogo\n",sair);
    return 0;
}