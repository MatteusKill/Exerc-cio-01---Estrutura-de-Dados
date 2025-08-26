#include <stdio.h>

struct Retangulo {
	float base;
	float altura;
};

int main () {
	struct Retangulo retangulo;
	float area;
	
	
	printf("Digite a base do retangulo: ");
	scanf("%f", &retangulo.base);
		
	printf("Digite a altura do retangulo: ");
	scanf("%f", &retangulo.altura);
	
	area = (retangulo.base * retangulo.altura) / 2;
	
	printf("A area do triangulo eh: %.2f", area);
	
	return 0;
}