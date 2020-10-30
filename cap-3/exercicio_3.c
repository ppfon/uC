#include <stdio.h>

int main(void) {
	char c;

	printf("Entre com um caractere apenas:\n");
	scanf("%c", &c);

	printf("Caractere %c em: \n", c);
	printf("Octal: %o | Decimal: %d | Hexadecimal: %x\n", \
			c, c, c);

	return 0;
}
