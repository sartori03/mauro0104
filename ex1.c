#include <stdio.h>

int main() {
    int num, fim = 3;
    
    do {
        printf("Digite um número: ");
        scanf("%d", &num);\ 
    
    if( num == 7) {
        printf("Você ganhou!\n");
        fim = 3;
    } else {
        fim--;
        if( fim > 0 ) {
        printf("Número incorreto. Tentativas restantes: %d\n", fim);
    } else {
        printf("Fim de jogo!");
    }
    }
    } while (fim > 0);

    return 0;
}