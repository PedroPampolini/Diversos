/*-------------------------------------------------------------------------------------------------------
Autor: Pedro Pampolini Mendicino
Data:28/09/2021
Última atualizção: 28/09/2021
Objetivo: Recebe 2 números, sendo um de altura máxima e outra da altura que será modificado ao longo do
procedimento
-------------------------------------------------------------------------------------------------------*/

#include <stdio.h>

void arvore(int altura,int max_altura)
{
    if(altura>1)    //Caso a altura seja maior que 1, irá chamar a função novamente com a altura-1 e a altura máxima
    {
        arvore(altura-1,max_altura);

        for (int i = 0; i <max_altura-altura; i++)  //Após a chamada, irá imprimir X espaços
        {
            printf(" ");
        }
        for (int i = 0; i < (altura*2-1); i++)  //Imprime o número impar de *
        {
            printf("*");
        }
        printf("\n");  
    }

    else    //Caso seja a primeira altura, irá imprimir apenas 1 * e os espaços equivalentes à altura
    {
        for (int i = 0; i <max_altura-altura; i++)
        {
            printf(" ");
        }
        printf("*\n"); 
    }
}


int main()
{
    int altura; //Declaração de variável

    //Leitura da variável
    printf("Qual a altura que deseja? ");
    scanf("%d",&altura);
    
    arvore(altura,altura);  //Chamada da função
    return 0;
}