#include <stdio.h>

int main() {
	int i = 0 ;
	int num[6];
	int maior =0;





	for(int i = 0; i < 6; i++) {
		printf("digite o %d o  numero: ", i );
		scanf("%d", &num[i]);

	}


	for(i=0; i < 6; i++) {
		if(num[i] > maior) {
			maior = num[i];

		}

	}
	printf("O  maior numero digitado e : %d\n", maior);

	return 0;

}

