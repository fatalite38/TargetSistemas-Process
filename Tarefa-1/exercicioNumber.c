#include <stdio.h>
#include <stdlib.h>


int main() {
	
//Declarando as variáveis
	int i = 13, sum = 0, K = 0;

//Inicializando um loop while 
	while (K < i) {
		K = K+1;
		sum = sum + K;
	}

//Exibindo a soma na tela
printf("A soma e: %d ", sum);
	return 0;
}

// A saída será 91
