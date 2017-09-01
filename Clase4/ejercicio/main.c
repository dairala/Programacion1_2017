#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    int numOculto;
    int numIngresado;
    char teclaIngresada;
    int juego;

    teclaIngresada = 's';
    while (teclaIngresada == 's')
    {
        numOculto = getNumAleatorio(1,100,1);
        //printf("%d\n",numeroOculto );

        juego = 1;
        while(juego == 1)
        {
            numIngresado = getInt("Ingrese un numero (0 - 99) \n");
            if(numIngresado < 0)
            {
                juego = 0;
            }
            else if(numIngresado == numOculto)
            {
                printf("FELICITACIONES GANASTE!!! \n");
                juego = 0;
            }
            else if(numIngresado > numOculto)
            {
                printf("EL NUMERO QUE INGRESASTE ES GRANDE!!! \n");
            }
            else if(numIngresado < numOculto)
            {
                printf("EL NUMERO QUE INGRESASTE ES CHICO!!! \n");
            }
        }

        teclaIngresada = getChar("Desea jugar nuevamente? (s/n)\n");

    }

    return 0;
}




