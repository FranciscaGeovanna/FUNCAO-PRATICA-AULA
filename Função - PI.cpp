#include <stdio.h>
#define PI 3.14

float areadoCirculo (float raio);

int main (){
	float r, a;
	
	printf ("Informe o valor do raio: ");
	scanf ("%f", &r);
	
	a = areadoCirculo(r);
	
	printf("A área do circulo é %.2f cm\n", a);
	
	return 0; 
}

float areadoCirculo (float raio){
	return PI * raio * raio;
}
