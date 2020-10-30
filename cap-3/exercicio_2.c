#include <stdio.h>

int main(void) 
{
	float distancia, qtd_litros, consumo_medio;

	printf("Entre com a distância (km) e a quantidade de litros, separados por um espaço:\n");
	scanf("%f %f", &distancia, &qtd_litros);

	consumo_medio = distancia/qtd_litros;

	printf("Consumo médio (km/l): %.2f\n", consumo_medio);

	return 0;
}
