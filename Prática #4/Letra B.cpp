#include <stdio.h>
#include <locale.h>

char* isNegative (int n){
	if (n >= 0){
		return "Falso";
	}
	return "Verdadeiro";
}

int main (){
	setlocale (LC_ALL, "portuguese_Brazil");
	
	int num;
	
	printf ("Digite o n�mero: ");
	scanf ("%d", &num);
	
	char* b = isNegative (num);
	
	printf ("O n�mero � positivo? %s", b);
	
	return 0;
}
