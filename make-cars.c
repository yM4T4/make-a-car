// Fiz esse projeto com o intuito de revisar Do, while, for, if e etc
// Para deixar ele 100% funcionando sem nenhum bug falta muito, mas esse não era o objetivo 
// Foi divertido fazer isso 
// 28 / 03 / 2025 
// By Miguel 


#include <stdio.h>



int main(void){


    char *modelo[4] = {"UNO", "GOL", "SAVEIRO", "FUSCA"};
    char *cor[4] = {"BRANCO", "PRETO", "AZUL", "PRATA"};
    char *aerofolio[5] = {"ESCADA", "ALTO", "MEDIO", "BAIXO", "SEM"};
    char *buzina[4] = {"NORMAL", "CIRCO", "CORNETA", "APITO"};

    int nummodelo, numcor, numaero, numbuzina;

    puts("-------------------------------");
    puts("FAÇA UM CARRO PERSONALIZADO");
    puts("-------------------------------");
    
    

    puts("Escolha o modelo do carro: ");
    
    for (int m = 0; m < 4; m++) {
        printf("%d - %s\n", m + 1, modelo[m]);
    }

    do{
    
    printf("Escolha um número correspondente: \n");
    scanf("%d", &nummodelo);
    puts("-------------------------------");

    if (nummodelo < 1 || nummodelo > 4)
    {
        puts("-------------------------------");
        puts("Número invalido, escolha outro");
        puts("-------------------------------");
    }
}

    while (nummodelo < 1 || nummodelo > 4);

      
    puts("Escolha a cor do carro: ");

    for (int c = 0; c < 4; c++){ 
    printf("%d - %s\n", c + 1, cor[c]);
    }

    do {

    puts("Escolha um número correspondente: ");
    scanf("%d", &numcor);
    puts("-------------------------------");

    if (numcor < 1 || numcor > 4)
    {
        puts("-------------------------------");
        puts("Número invalido, escolha outro");
        puts("-------------------------------");
    }

}
    while (numcor < 1 || numcor > 4);

puts("Escola o estilo do aerofólio: ");

for (int a = 0; a < 5; a++)
printf("%d - %s\n", a + 1, aerofolio[a]);

do {
    puts("Escolha um número correspondente: ");
    scanf("%d", &numaero);
    puts("-------------------------------");

    if (numaero < 1 || numaero > 5){  

        puts("-------------------------------");
        puts("Número invalido, escolha outro");
        puts("-------------------------------");
    }

}
    while (numaero < 1 || numaero > 5);


    puts("Escolha a buzina do carro: ");
    for (int b = 0; b < 4; b++)
    printf("%d -%s\n", b + 1, buzina[b]);

    do{

        puts("Escolha um número correspondente: ");
        scanf("%d", &numbuzina);
        puts(" ");

        if(numbuzina < 1 || numbuzina > 4){

        puts("-------------------------------");
        puts("Número invalido, escolha outro");
        puts("-------------------------------");

        }

        
}
    while(numbuzina < 1 || numbuzina > 4);
    puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("O seu carro é um %s de cor %s, %s aerofolio e com buzina %s.\n", modelo[nummodelo], cor[numcor], aerofolio[numaero], buzina[numbuzina]);
    puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    puts(" ");
return 0;



}