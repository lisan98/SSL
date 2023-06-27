#include <stdio.h>
#include "Conversion.h"
#include <stdlib.h>

int main (int argc, char *argv[] ){

    float valoresFarh[50] , valoresCelsius[50]; 
    int contador, anchoColumnaFarh = 21,anchoColumnaCelsius = 18;
    int longitud = argc;
    
    for(contador=0;contador<=argc;contador++){

        valoresFarh[contador] = atof(argv[contador]);
    
    }

    for(contador = 0;contador <= longitud;contador++){

        valoresCelsius[contador] = conversorFarh_Celsius(valoresFarh[contador]);
    }


    printf("+--------------------+---------------+\n");
    printf("|%*s|%*s|\n", anchoColumnaFarh, " Grados en Farhenheit", anchoColumnaCelsius,
            " Grados en Celsius");
    printf("+--------------------+---------------+\n");

    for (contador = 0; contador < longitud; contador++) {
        printf("|%*f|%*f|\n", anchoColumnaFarh, valoresFarh[contador], anchoColumnaCelsius,
            valoresCelsius[contador]);
    }


    return 0;


}