#include <stdio.h>

int main() {
	int i = 0 ;
	int num[6];
	int menor =0;





	for(int i = 0; i < 6; i++) {
		printf("digite o %d o  numero: ", i );
		scanf("%d", &num[i]);

	}


	for(i=0; i < 6; i++) {
		if(num[i] < menor) {
			menor = num[i];

		}

	}
	printf("O  menor numero digitado e : %d\n", menor);

	return 0;

}

