#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define SIZE 6

int main() {
� � setlocale(LC_ALL, "");
� � int i, numeros[SIZE];
� � int pares = 0, impares = 0;

� � for (i = 0; i < SIZE; i++) {
� � � � printf("Digite o %i� Numero:", i + 1);
� � � � scanf("%i", &numeros[i]);

� � � � if (numeros[i] % 2 == 0) {
� � � � � � pares++;
� � � � } else {
� � � � � � impares++;
� � � � }
� � }

� � printf("\n----exibindo resultados----\n");
� � for (i = 0; i < SIZE; i++) {
� � � � printf("Os Numeros inseridos s�o: %i� numero: %i\n", i + 1, numeros[i]);
� � }

� � printf("Quantidade de pares: %i\n", pares);
� � printf("Quantidade de �mpares: %i\n", impares);

� � return 0;
}
