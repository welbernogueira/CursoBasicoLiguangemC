#include <stdio.h>

int main() {
	
	char s[10];
	
	printf("Digite algo (scanf convencional): \n");
	scanf("%s", s);
	fflush(stdin);
	
	printf("Resultado: %s\n\n", s);
	
	// no scanff aprimorado n�o se pode usar todos os espa�os
	//tem que reservar o �ltimo [n-1], por isso abaixo tem 9 ou inv�s de 10
	printf("Resultado (scanf aprimorado): \n");
	scanf("%9[^\n]s", s);
	fflush(stdin);
	
	printf ("Resultado: %s\n\n", s);
	
}
