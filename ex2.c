#include <stdio.h>

int main(void) {
    int num, soma = 0;
 do {
        printf("Digite um número [1 - 6]: ");
        scanf("%d", &num);

        if(num < 1 || num > 6) {
            printf("Apenas números de 1 a 6!\n");
                continue;
            }
        if(num % 2 == 0) {
            soma += num;
        } else {
            break;
        }
} while (soma % 2 == 0);

    printf("A soma dos números digitados é: %d\n", soma);
      
  return 0;
  }
