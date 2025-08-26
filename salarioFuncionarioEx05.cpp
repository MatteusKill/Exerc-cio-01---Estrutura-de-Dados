#include<stdio.h>

struct Funcionario {
	char nome [100];
	float salarioBase;
	int tempoEmpresa;
	
};

int main () {
	struct Funcionario funcionario;
	float salarioBonus;
	
	printf("Digite o nome do funcionario: ");
	scanf("%s", &funcionario.nome);
	
	printf("Digite o salario base desse funcionario: ");
	scanf("%f", &funcionario.salarioBase);
	
	printf("Digite o tempo de empresa desse funcionario em anos: ");
	scanf("%d", &funcionario.tempoEmpresa);
	
	if (funcionario.tempoEmpresa <= 3) {
		salarioBonus = funcionario.salarioBase + (funcionario.salarioBase * 0.05);	
	}
	else {
		salarioBonus = funcionario.salarioBase + (funcionario.salarioBase * 1.10);
	}
	
	printf("\nO nome do funcionario eh: %s.\n", funcionario.nome);
	printf("\nO salario base eh: %.2f.\n", funcionario.salarioBase);
	printf("\nO tempo de empresa eh: %d\n", funcionario.tempoEmpresa);
	printf("\nO salario + bonus do funcionario ficou: %.3f", salarioBonus);
	
	return 0;
}