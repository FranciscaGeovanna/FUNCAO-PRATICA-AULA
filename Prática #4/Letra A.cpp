#include <stdio.h>
#include <locale.h>

int soma (int n1, int n2){
	return n1 + n2;
}

int main (){
	setlocale (LC_ALL, "portuguese_Brazil");
	
	int a, b, r;
	
	printf ("Digite o primeiro número: ");
	scanf ("%d", &a);
	
	printf ("Digite o segundo número: ");
	scanf ("%d", &b);
	
	r = soma (a, b);
	
	printf ("Resultado: %d", r);
	
	return 0;
}
