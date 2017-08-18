#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numeroUsuario;
    int contadorNumerosIngresados=0;
    float acumuladorNumerosIngresados=0;
    float numeroMaximoIngresado = 0;
    float numeroMinimoIngresado = 0;
    float promedioSolicitado;
    int flag=0;
    char respuesta;

    do{
        printf("Ingrese un numero:\n");
        scanf("%f", &numeroUsuario);

        contadorNumerosIngresados++;

        acumuladorNumerosIngresados+=numeroUsuario;

        if(contadorNumerosIngresados==0){
            numeroMaximoIngresado=numeroUsuario;
            numeroMinimoIngresado=numeroUsuario;
        }

        else{
                if(numeroUsuario>numeroMaximoIngresado){
            numeroMaximoIngresado=numeroUsuario;

        }if(numeroUsuario<numeroMinimoIngresado||flag==0){
            numeroMinimoIngresado=numeroUsuario;
            flag=1;
        }

        }
        printf("Desea ingresar mas numeros?(s/n):\n");
        fflush(stdin);
        scanf("%c",&respuesta);


    }while(respuesta=='s');

 promedioSolicitado=acumuladorNumerosIngresados/contadorNumerosIngresados;
    printf("El promedio es %.2f", promedioSolicitado);
    printf("\n El numero maximo es %.2f", numeroMaximoIngresado);
    printf("\n El numero minimo es %.2f", numeroMinimoIngresado);




}
