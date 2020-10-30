#include <stdio.h>

int main(void)
{
	int n1, n2;
	float media;

	printf("Entre com dois inteiros, separando-os por um espaço vazio:\n");
	scanf("%d %d", &n1, &n2);

	media = (float)(n1+n2)/2;

	printf("Média aritmética: %.1f\n", media);

	return 0;
}
