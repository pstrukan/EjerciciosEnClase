#include <stdio.h>
#include <stdlib.h>
#define NUM_ITERACION 4
int main()
{
    int i;
    int numUsuario;
    int cantNegativos=0;
    int cantPositivos=0;
    int acumNegativos=0;
    int acumPositivos=0;
    float promNegativos;
    float promPositivos;

    for(i=0; i<NUM_ITERACION; i++){
        printf("Ingrese un numero:\n");
        scanf("%d", &numUsuario);
        if(numUsuario<0){
            cantNegativos++;
            acumNegativos=acumNegativos+numUsuario;
        }else{
            cantPositivos++;
            acumPositivos=acumPositivos+numUsuario;
            }
    }
    promNegativos=acumNegativos/cantNegativos;
    promPositivos=acumPositivos/cantPositivos;
    printf("La cantidad de negativos es %d y la de positivos es %d", cantNegativos, cantPositivos);
    printf("\n El promedio de negativos es %.2f y el promedio de positivos es %.2f", promNegativos,promPositivos);
    }
