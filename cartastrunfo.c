#include <stdio.h>

int main(){

    /*Na aprimeira étapa do jogo, iremos criar as vairaveis*/
    printf("Jogando a sorte");
    int carta1 = 550.000;
    int carta2 = 450.000;
    /*Na segunda étapa do jogo, iremos criar os valores*/

    printf("escolha a sua carta\n");
    scanf("%d", &carta1,carta2 );
    /*Na terceira étapa do jogo, iremos verificar*/

    if (carta1 < carta2) {   
        printf(" Rio de janeiro tem menas população \n");
    }
    else
    { printf("Sao paulo tem mais população \n");
    }
}