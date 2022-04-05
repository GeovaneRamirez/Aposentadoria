#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Atividade:

Uma pessoa pode se aposentar pelo INSS caso esteja em alguma das situações abaixo:

•É do sexo masculino, possui pelo menos 65 anos, e pelo menos 10 anos de contribuição.
•É do sexo masculino, possui pelo menos 63 anos, e pelo menos 15 anos de contribuição.
•É do sexo feminino, possui pelo menos 63 anos, e pelo menos 10 anos de contribuição.
•É do sexo feminino, possui pelo menos 61 anos, e pelo menos 15 anos de contribuição.

Crie um programa para ler um caracter ’M’ ou ’F’ que representa o sexo de um indivíduo,
ler a sua idade, e seu tempo de contribuição. O programa deverá então imprimir “Aposentável”.
Caso o indivíduo se enquadrar em uma das situações acima. Caso contrário oprograma deverá imprimir “Não Aposentável”. */


int main()
{

    setlocale(LC_ALL, "Portuguese");

    char sexo;
    int idade;
    float contribuicao;
    int aux=0;

    printf("Digite seu sexo abaixo...\n\nDigite M para masculino e F para feminino: ");
    scanf("%c", &sexo);

    printf ("\nDigite sua idade: ");
    scanf("%d", &idade);

    printf("\nDigite o tempo de contribuição (em anos):");
    scanf ("%f", &contribuicao);

    if ( (sexo=='m' || sexo=='M') && (idade>=60) && (contribuicao>=10) ) {
        aux++;
    } else if ( (sexo=='m' || sexo=='M') && (idade>=63) && contribuicao >=15 ) {
        aux++;
    } else if ( (sexo=='f' || sexo=='F') && (idade>=63) && contribuicao >=10 ) {
        aux++;
    } else if ( (sexo=='f' || sexo=='F') && (idade>=61) && contribuicao >=15 ) {
        aux++;
    }

    if (aux==0) {
        printf("\n\nVocê NÃO é aposentável!!!\n");
    } else {
        printf("\n\nVocê é Aposentável!!!\n");
    }


    return 0;
}
