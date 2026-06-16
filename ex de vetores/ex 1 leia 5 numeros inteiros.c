

#include <stdio.h>

int main() {
    int numeros[5]; 
    int i;

   
    printf("Digite 5 numeros inteiros:\n");
    for(i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    
    printf("\nOs valores digitados foram:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    
    printf("\n"); 
    
}