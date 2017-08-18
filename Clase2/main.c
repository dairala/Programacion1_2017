#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   int max=0;
   int min=0;
   float promedio;
   //float promedioMin;
   //int bandera=1;
   int acumulador=0;
   int contador=0;
   int acumuladorMax;
   int acumuladorMin;
   int contadorMax=0;
   int contadorMin=0;
   char respuesta;
   do
   {
       printf("ingrese un numero:\n");
       scanf("%d",&num);
       printf("Desea continuar s o n:\n");
       fflush(stdin);
       scanf("%c",&respuesta);
       acumulador+=num;

       if(contador==0)
       {
           max=num;
           min=num;
       }
       else if(num>max)
       {
           max=num;
           acumuladorMax=acumuladorMax+num;
           contadorMax++;
       }
       else if(num<min)
       {
           min=num;
           acumuladorMin=acumuladorMin+num;
           contadorMin++;
       }
       contador++;
   }while(respuesta=='s');
   //promedioMax=acumuladorMax/contadorMax;
   promedio=acumulador/contador;

   printf("El maximo es: %d",max);
   printf("El minimo es: %d", min);
   printf("El promedio es: %.2f",promedio);
   return 0;
}
