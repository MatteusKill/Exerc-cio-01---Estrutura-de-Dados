#include <stdio.h>

struct Pessoa {
	char nome [50];
	int idade;
	float altura;
	
};

int main () {
	struct Pessoa pessoa;
	
	printf("Digite o seu nome: ");
	scanf("%s", &pessoa.nome);
	
	printf("Digite a sua idade: ");
	scanf("%d", &pessoa.idade);
	
	printf("Digite a sua altura: ");
	scanf("%f", &pessoa.altura);
	
	printf("\nSeu nome eh: %s\n", pessoa.nome);
	printf("\nSua idade eh: %d\n", pessoa.idade);
	printf("\nSua altura eh: %.2f\n", pessoa.altura);
	
	
	return 0;
}