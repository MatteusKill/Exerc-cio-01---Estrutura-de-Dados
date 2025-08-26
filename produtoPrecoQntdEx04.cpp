#include <stdio.h>

struct Produto {
	char nome [20];
	float preco;
	int qntdEstoque;
};

int main () {
	struct Produto produto;
	
	printf("Digite um nome de um produto: ");
	scanf("%s", &produto.nome);
	
	printf("Digite o preco do produto mencionado (R$): ");
	scanf("%f", &produto.preco);
		
	printf("Digite a quantidade do produto mencionado em estoque: ");
	scanf("%d", &produto.qntdEstoque);
	
	printf("O %s tem %d unidade(s) disponivel em estoque e custa %.2f por unidade. ", produto.nome, produto.qntdEstoque, produto.preco);
	
	return 0;
}