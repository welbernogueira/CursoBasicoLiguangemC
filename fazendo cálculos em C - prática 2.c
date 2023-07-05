#include <stdio.h>

#define texto "Entrada e saida de dados."


int main() {
	printf("%s\n", texto);
	
	int idade = 0;
	float altura = 0.0;
	char nome[50] = ""; // sempre determinar a quantidade de char quecabe nessa variácvel
	
	printf("Digite a idade: \n");
	scanf("%d", &idade);	
	
	printf("Digite a altura: \n");
	scanf("%f", &altura);
	
	printf("Digite o nome: \n");
	scanf("%s", nome);
	
	
	printf ("Dados infromados: \n");
	printf ("Idade: %d.\n", idade);
	printf ("Altura: %.2f.\n", altura);
	printf ("Nome: %s.\n", nome);
	
	
}
