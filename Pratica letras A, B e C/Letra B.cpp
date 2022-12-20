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
	
	printf ("Digite o número: ");
	scanf ("%d", &num);
	
	char* b = isNegative (num);
	
	printf ("O número é positivo? %s", b);
	
	return 0;
}
