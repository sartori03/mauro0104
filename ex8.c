#include <stdio.h>

int testa_par(int x) {
    return x % 2;
}

int main(void) {

    int par = testa_par(10);
    printf("10 é par? %d\n", !par);
    int par2 = testa_par(3);
    printf("3 é par? %d", !par2);

  return 0;
}