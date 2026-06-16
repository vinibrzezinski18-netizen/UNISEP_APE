#include <stdio.h>

int main() {
	int numeros[10];
	int i;


	printf("Digite apenas numero par:\n");
	for(i = 0; i < 10; i++) {
		printf("Numero %d: ", i +1);
		scanf("%d", &numeros[i]);
	}


	printf("\nOs valores pares:\n");
	for(i = 0; i < 10; i++) {
		if(numeros[i] % 2==0) {
			printf("%d ", numeros[i]);
		}

	}

	


}