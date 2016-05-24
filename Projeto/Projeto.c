#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float calcularQuadrado(){
	int lado, area;
	
	system("cls");

	printf("Insira o valor do lado do quadrado: ");
	scanf("%d", &lado);

	area = (lado * lado);

	printf("A Area do quadrado e: %f \n", area);


return 0;			
	
}

float calcularRetangulo(){
	int base, altura, area2;
	
	system("cls");

	printf("Insira o valor da base do retangulo: ");
	scanf("%d", &base);

	printf("Insira o valor da altura do retangulo: ");
	scanf("%f", &altura);
	
	area2 = (base * altura);

	printf("A Area do retangulo e: %f \n", area2);


return 0;			
	
	
}

int main(int argc, char** argv) {
	
	int forma;
	
	printf("##########Bem vindo##########");
	printf("\n");
	printf("Aqui sera sua nova forma de calcular areas de quadrados e retangulos.");
	printf("\n\nPara usar:\n");
	printf("1: Selecione qual forma geometrica voce quer calcular");
	printf("\n2: Insira os dados pedidos (Dados negativos nao sao aceitos)");
	printf("\n");
	printf("\n");
	
	printf("Selecione 1 para calcular quadrado e 2 para retangulo: ");
	scanf("%d", &forma);
	
	switch(forma){
		
		case 1:
			calcularQuadrado();
			break;
			
		case 2:
			calcularRetangulo();
			break;
	}
	
	return 0;
}
