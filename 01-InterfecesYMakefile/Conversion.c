#include <stdio.h>
#include "Conversion.h"

float conversorFarh_Celsius(float gradosFarh){

    float gradosCelsius;

    gradosCelsius = (gradosFarh - 32)*(5.0/9.0);


    return gradosCelsius;
}