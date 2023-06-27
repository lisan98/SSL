#include <stdio.h>
#include "Conversion.h"
#include <assert.h>

int main(void){

    assert (conversorFarh_Celsius(32) == 0)
    assert (conversorFarh_Celsius(50) == 10)
    assert (conversorFarh_Celsius(14) == -10)
}