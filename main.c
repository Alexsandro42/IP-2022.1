#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM_VET 15

int main()
{
    int dados [ TAM_VET ];

    setlocale ( LC_ALL, "portuguese" );

    printf ( "Programa: Demonstra��o de vetores!\n");

    printf ( "ENTRADA DE DADOS:\n" );
    for ( int i = 0; i < TAM_VET; i++ )
    {
        printf ( "Digite o %i� valor: ", i + 1 );
        scanf  ( "%i", &dados[i] );
    }

    printf ( "SA�DA DE DADOS:\n" );
    for ( int i = 0; i < TAM_VET; i++ )
    {
        printf ( "Dados[%i] = %i.\n", i, dados[i] );
    }

    return 0;
}
