#include <stdio.h>

int main(void) {
    int num, soma = 0;
 do {
        printf("Digite um número: ");
        scanf("%d", &num);
        
        if(num % 2 == 0) {
            soma += num;
        } else {
            break;
        }
} while (soma % 2 == 0);

    printf("A soma dos números digitados é: %d\n", soma);
      
  return 0;
  }