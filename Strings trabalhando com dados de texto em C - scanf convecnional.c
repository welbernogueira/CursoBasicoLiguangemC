#include <stdio.h>

int main() {
	
	char s[10];
	
	printf("Digite algo (scanf convencional): \n");
	scanf("%s", s);
	fflush(stdin);
	
	printf("Resultado: %s\n\n", s);
	
	// no scanff aprimorado não se pode usar todos os espaços
	//tem que reservar o último [n-1], por isso abaixo tem 9 ou invés de 10
	printf("Resultado (scanf aprimorado): \n");
	scanf("%9[^\n]s", s);
	fflush(stdin);
	
	printf ("Resultado: %s\n\n", s);
	
}
