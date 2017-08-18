#include <stdio.h>
#include <stdlib.h>
#define NUM_CAMBIO 6

int main()
{
    int Numero;
    int i;
    int ContadorNegativo=0;
    int CantidadPositivo;
    int AcumuladorPositivo=0;
    int AcumuladorNegativo=0;
    float PromedioPositivo=1;
    float PromedioNegativo=1;
    for(i=0;i<NUM_CAMBIO;i++)
    {
        printf("Ingrese un numero:");
        scanf("%d",&Numero);
        if(Numero<0)
        {
            ContadorNegativo++;
            AcumuladorNegativo=AcumuladorNegativo+Numero;

        }
        else
        {
            AcumuladorPositivo=AcumuladorPositivo+Numero;
        }
    }

    if(CantidadPositivo!=0)
    {
        PromedioPositivo=AcumuladorPositivo/(float)CantidadPositivo;
    }
    else ifÇ(ContadorNegativo!=0)
    {
        PromedioNegativo=AcumuladorNegativo/(float)ContadorNegativo;
    }
    CantidadPositivo=ContadorNegativo-NUM_CAMBIO;
    printf("Cantidad de numeros positivos:%d y la cantidad de numeros negativos son %d",CantidadPositivo, ContadorNegativo);
    printf("La suma de positivos es:%d y la cantidad de negativos es: %d", AcumuladorPositivo, AcumuladorNegativo);
    printf("El promedio de positivos es: %f y el promedio de negativos es: %f",PromedioPositivo, PromedioNegativo);
    return 0;
}
