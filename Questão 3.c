#include <stdio.h>
#include <locale.h>

void titulo() {
	system ("cls || clear"); 


}

int main() {
setlocale (LC_ALL, "");


	char nome[100], email[200], telefone[10];
	int idade, opcao;


	printf("Digite o nome: ");
	fgets (nome, 100, stdin);
	printf ("Digite a idade: ");
	scanf("%i",&idade);
	printf("Digite o email: ");
	scanf("%s",&email);
	printf("Digite o telefone: ");
	fgets(telefone, 10, stdin);

	do {
		printf ("Digite uma opção: ");
		scanf("%i",&opcao);
		
		switch (opcao) {
			case 1:
				printf("Nome: %s\n", nome);
				printf("Idade: %i", idade);
				break;

			case 2:
				printf("Nome: %s\n", nome);
				printf("Email: %s", email);
				break;

			case 3:
				printf("Nome: %s\n", nome);
				printf("Telefone: %s", telefone);
				break;

			case 4:
				printf("Nome: %s\n", nome);
				printf("Idade: %i\n", idade);
				printf("e-mail: %s\n", email);
				printf("Telefone: %s", telefone);
				break;

			case 0:
				break;

			default:
				system("cls || clear");
				printf("Opção inválida, Tente novamente.");
		}

	} while (opcao != 0);

	printf("Tarefa Concluída.");
	
	return 0; 
}
