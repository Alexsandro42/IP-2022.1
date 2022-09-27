#include <stdio.h>
#include <stdlib.h>

int main(){

    int quant;
    float E = 0, den = 2, sinal = 1;

    printf("Digite a quantidade de termos: ");
    scanf("%i", &quant);

    for(int i=1; i<=quant; i++){
        E += 1/den*sinal;

        sinal = -sinal;

        den+=2;
    }

    printf("E = %.2f", E);

    return 0;
}