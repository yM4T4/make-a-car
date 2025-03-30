// aqui vou fazer um contador só q floats
#include <stdio.h>
#define MAX 5
int main() {
    float valor[MAX] = {10.5,11,12.4,13.82};
    {
    int tamanho = sizeof(valor) / sizeof(valor[0]); 
        for (int n = 0; n < tamanho; n++)
        printf("Contagem: %d -> %.2f\n), n + 1, valor[n]);s
    }
    
    
    
    return 0;
}