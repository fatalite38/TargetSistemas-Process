#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
//Declarando as variáveis
    int num, a = 0, b = 1, temp;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

//Iniciando um loop while para verificar se pertence a sequência de fibonacci
    while (b <= num) {
        if (b == num) {
            printf("%d pertence a sequencia de Fibonacci.\n", num);
            return 0;
        }
        temp = b;
        b += a;
        a = temp;
    }

    printf("%d nao pertence a sequencia de Fibonacci.\n", num);
    return 0;
}
