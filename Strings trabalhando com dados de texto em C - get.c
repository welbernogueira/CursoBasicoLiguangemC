#include <stdio.h>

int main() {
	
	char s[10];
	
	//gets n�o limita a quatidade de caracteres digitados, 
	// n�o respeita a delimita��o de 10
	
	printf("Digite algo (leitura pelo gets): \n");
	gets(s);
	fflush(stdin);
	
	puts("Resultado:");
	puts(s);
	puts("");
	
    printf("Digite algo (leitura pelo Fgets): \n");
	fgets(s, 10, stdin);
	fflush(stdin);
	
	puts("Resultado:");
	puts(s);
	
}
	 
