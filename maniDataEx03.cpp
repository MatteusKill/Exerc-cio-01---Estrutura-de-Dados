#include <stdio.h>

struct Data{
	int dia;
	int mes;
	int ano;
};

int main () {
	struct Data data;
	
	printf("Digite um dia do calendario: ");
	scanf("%d", &data.dia);
	
	printf("Digite um mes do calendario: ");
	scanf("%d", &data.mes);
	
	printf("Digite um dia do calendario: ");
	scanf("%d", &data.ano);
	
	printf("Data informada: %d/%d/%d", data.dia, data.mes, data.ano);
	
	return 0;
}