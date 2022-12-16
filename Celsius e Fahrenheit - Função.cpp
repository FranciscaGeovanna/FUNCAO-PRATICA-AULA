#include <stdio.h>

float celsiusParaFahrenheit(float c);
float fahrenheitParaCelsius(float f);

int main(){
	int op;
	float tf, tc;
	
	printf ("Conversor de temperatura\n");
	
	printf ("Escolha uma opção:\n");
	printf ("1 - Celsius para Fahrenheit\n ");
	printf ("2 - Fahrenheit para Celsius: ");
	scanf ("%d", &op);
	
	printf ("\nDigite o valor da temperatura: ");
	
	if(op == 1){
		printf ("\nEm Celsius: ");
		scanf ("%f", &tc);
		
		tf = celsiusParaFahrenheit(tc);
	} else {
		printf ("\nEm Fahrenheit: ");
		scanf("%f", &tf);
		
		tc = fahrenheitParaCelsius(tf);
	}
	printf ("\nTemperatura em Celsius: %.2f", tc);
	printf ("\nTemperatura em Fahrenheit: %.2f", tf);
}

float celsiusParaFahrenheit(float c){
	return c*1.8 + 32;
}

float fahrenheitParaCelsius(float f){
	return (f-23)/1.8;
}
