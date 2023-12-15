#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Aluno 
{
    char nome[200];
    char dt [200];
    float nota1, nota2;
    float media;
    
};

float calcularMedia(struct Aluno aluno){

    return (aluno.nota1 + aluno.nota2) / 2;

}



void verificarAprovacao(struct Aluno aluno){

    if(aluno.media >= 7){

        printf("\nAprovado!\n");
    }else{
        printf("\nREPROVADO!\n");
    }

}





int main(){

    setlocale(LC_ALL, "portuguese");

    struct Aluno aluno[5];
    int i,j;

    for ( i = 0; i < 5; i++)
    {
    printf("\n\nDigite o %d� nome do aluno: \n\n", i + 1);
    scanf("%s", &aluno[i].nome);


    printf("\n\nInforme a data de nascimento do %d� aluno: \n\n", i + 1);
    scanf("%s", &aluno[i].dt);

  
    printf("\n\nInforme a nota 1 do %d� aluno: \n\n", i+1);
    scanf("%s", &aluno[i].nota1);

    printf("\n\nInforme a noda 2 do %d� aluno: \n\n", i + 1);
    scanf("%s", &aluno[i].nota2);

    aluno[i].media = calcularMedia(aluno[i]);
    
    }
      for ( j = 0; j < 5; j++) {
        printf("\n\nM�dia de %s: %.2f\n\n", aluno[j].nome, aluno[j].media);
        verificarAprovacao(aluno[j]);
    }

    return 0;
}

    

       










