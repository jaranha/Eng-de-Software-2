#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float calcularQuadrado(){
	float lado, area;
	
	system("cls");

	printf("Insira o valor do lado do quadrado: ");
	scanf("%f", &lado);

	area = (lado * lado);

	printf("A Area do quadrado e: %f \n", area);


return 0;			
	
}

float calcularRetangulo(){
	float base, altura, area2;
	
	system("cls");

	printf("Insira o valor da base do retangulo: ");
	scanf("%f", &base);

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
	
	
	do{

	printf("\n\nSelecione 1 para calcular quadrado, 2 para retangulo e 3 para sair: ");
	scanf("%d", &forma);
	
	switch(forma){
		case 1:
			calcularQuadrado();
			break;
			
		case 2:
			calcularRetangulo();
			break;
		case 3:
			exit;
	}
	
	

}while(forma>0 || forma == "3");
	
	return 0;
}
