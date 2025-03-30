// Aqui tenho o objetivo de criar uma tabela de preço de carros 
#include <stdio.h>

int main(void){

puts("-------------------------------------");
puts("MODELO DO CARRO -> VELOCIDADE 1 E 2");
puts("-------------------------------------");


    char carros[3][10] = {
        "Monza",
        "Marea",
        "Unao"
};

    int velocidades[3][2] = {
        { 103, 204 },
        { 32, 57 },
        { 400, 780 }

    };

    for (int linha = 0; linha < 3; linha++) {

    printf("%s: ", carros[linha]);

        for (int colunas = 0; colunas < 2; colunas++) {
            printf("%d ", velocidades[linha][colunas]);
//for interno 
        }
        puts("");
        
//for externo
}
puts("-------------------------------------");


    return 0;
}

//for externo é dedicado as coisas unicas posso dizer, visto que ele prioriza as linhas, logo nao se repete a todo instante
//já o for interno é dedicado as colunas, entao estao sempre se repetindo, se eu colocar o puts no for interno, ele vai se aplicar toda hora, e nao só no final