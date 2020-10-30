#include <stdio.h>

int main(void) {
	float fahrenheit, celsius;

	printf("Entre com a temperatura em Fahrenheit:\n");
	scanf("%f", &fahrenheit); 

	celsius = 5 * (fahrenheit - 32) / 9; 

	printf("Temperatura correspondente em Celsius: %.2f\n", celsius);

	return 0;
}
