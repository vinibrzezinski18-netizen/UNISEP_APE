#include <stdio.h>

int main() {
    int i = 0 ;
	int numeros[8];
	int soma =0;


	

	for(int i = 0; i < 8; i++) {
		printf("digite o %d numero: ", i +1);
		scanf("%d", &numeros[i]);
	}



	for(int i = 0; i < 8; i++) {
		soma = soma + numeros[i];
	}

	printf("\n--- Resultado ---\n");
	printf("A soma de todos os numeros e : %d\n", soma);


}
