// aqui tenho o objetivo de criar um looping for simples que conte ate 10 -> acabei fazendo uma lista de nomes tambem com uma sting char limitada
#include <stdio.h>

#define HEXA_STR 200

int main(){
    char *nomes[HEXA_STR] = {"Miguel", "Ana", "Pedro", "Carlos", "Manuel", "Calica"};

        for (int n = 0; n < 6; n++) {

        printf("Oi, eu sou:%s\n", nomes[n]);

        }
    
    return 0;
}