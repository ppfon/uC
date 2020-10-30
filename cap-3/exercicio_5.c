#include <stdio.h>
#include <math.h>

int main(void) {
	float cateto1, cateto2, hipotenusa;

	printf("Entre com a medida dos dois catetos, separadas por um espaço:\n");
	scanf("%f %f", &cateto1, &cateto2);

	hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));

	printf("Hipotenusa: %.2f\n", hipotenusa);

	return 0;
}
