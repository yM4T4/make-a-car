// Aqui vou aplicar oque eu aprendi no estudo-matrizes.c tentando nao colar nada

#include <stdio.h>

int main(void){

puts("-----------------");
puts("Tabela dos carros");
puts("-----------------");

float carros [4][3] = 
{
    { 30.0, 20.0, 10.0 },
    { 18.0, 40.0, 47.8 },
    { 45.2, 54.2, 53.2 },
    { 24.2, 25.2, 65.2 }

};
    for (int linha = 0; linha < 4; linha++){
printf("Carro%d - Performance: ", linha + 1);

        for (int coluna = 0; coluna < 3; coluna++){
        printf("%5.2f - ", carros[linha][coluna]);
        }
    puts("");
    }

}
