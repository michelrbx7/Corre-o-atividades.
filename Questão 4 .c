#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	char nome[200];
	float nota[4], media, soma = 0;
	int i;
	
		printf("Digite seu nome: ");
		scanf("%s",&nome[i]);	
	for(i=0;i<=3;i++){
		printf("Digite sua %i� nota: ", i + 1);
		scanf("%f",&nota[i]);
		soma += nota[i];
	} 
	
		printf("Nome do aluno: %s\n", nome);
	for(i=0;i<=3;i++){
		printf("%i� nota: %.1f\n", i + 1, nota[i]);
		media = soma / 4;
	}	
		printf("M�dia do aluno: %.1f\n", media);
		
	if(media >= 7){
		printf("Aprovado.");
	}else if(media >= 5){
		printf("Recupera��o.");
	}else{
		printf("Reprovado.");
	}


	return 0;
}
