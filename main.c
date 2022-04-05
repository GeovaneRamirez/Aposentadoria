#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Atividade:

Uma pessoa pode se aposentar pelo INSS caso esteja em alguma das situa��es abaixo:

�� do sexo masculino, possui pelo menos 65 anos, e pelo menos 10 anos de contribui��o.
�� do sexo masculino, possui pelo menos 63 anos, e pelo menos 15 anos de contribui��o.
�� do sexo feminino, possui pelo menos 63 anos, e pelo menos 10 anos de contribui��o.
�� do sexo feminino, possui pelo menos 61 anos, e pelo menos 15 anos de contribui��o.

Crie um programa para ler um caracter �M� ou �F� que representa o sexo de um indiv�duo,
ler a sua idade, e seu tempo de contribui��o. O programa dever� ent�o imprimir �Aposent�vel�.
Caso o indiv�duo se enquadrar em uma das situa��es acima. Caso contr�rio oprograma dever� imprimir �N�o Aposent�vel�. */


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

    printf("\nDigite o tempo de contribui��o (em anos):");
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
        printf("\n\nVoc� N�O � aposent�vel!!!\n");
    } else {
        printf("\n\nVoc� � Aposent�vel!!!\n");
    }


    return 0;
}
