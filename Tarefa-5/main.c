
#include <stdio.h>
#include <string.h>

int main(){
	
//declarando uma string de tamanho 100 e uma variável temporária
   char str[100], temp;
   int i, j;
   
//usuário irá digitar a string desejada
   printf("Digite uma string: ");
   gets(str);

   i = 0;
   j = strlen(str) - 1;

// Fazemos um loop while, até que i seja maior ou igual a j.
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }

   printf("String invertida: %s", str);

   return 0;
}
