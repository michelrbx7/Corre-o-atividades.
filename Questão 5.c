#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main(){
	setlocale(LC_ALL, "");
	int numero, i;
	int maiorNumero = INT_MIN, menorNumero = INT_MAX;
	
	for(i=0;i<=4;i++){
		printf ("Digite o %i� n�mero: ", i + 1);
		scanf("%i",&numero);

	if(numero > maiorNumero){
		maiorNumero = numero;
	}
	if(numero < menorNumero){
		menorNumero = numero;
	}
}
		printf("Maior n�mero: %i\n", maiorNumero);
		printf("Menor n�mero: %i", menorNumero);
	
	
	
	
	
	
	
	return 0;
}
