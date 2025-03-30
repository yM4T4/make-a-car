#include <stdio.h>

// Aqui tem o objetivo de fazer agora uma matriz que fala a nota dos alunos, estou tentando fazer sozinho mas estou colando tambem do mestre
int main(void) 
    {

printf("------------------\n NOTA DOS ALUNOS \n------------------\n");

float turma [3][3] = 
{
    { 9.9, 9.8, 5.7 },
    { 8.5, 5.8, 4.9 },
    { 7.4, 3.7, 2.3 }

};

puts("NOTA DOS ALUNOS");

for (int linha = 0; linha < 3; linha++){

    printf("Aluno%d:", linha + 1);

        for (int coluna = 0; coluna < 3; coluna++){
        printf("%5.2f", turma[linha][coluna]);


    }
    puts("");


    }
    



return 0;




}

