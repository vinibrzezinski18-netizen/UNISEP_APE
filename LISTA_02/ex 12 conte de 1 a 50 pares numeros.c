
#include <stdio.h>

int main() {
    int i, contador = 0;

    for (i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            contador++;
        }
    }

    printf("Existem %d numeros pares entre 1 e 50.\n", contador);{
        
    }
    
}
