/******************************************************************************
// Function name: convertCtoF
//
// DESCRIPTION:   A function that takes in an integer value, and converts
it
//                to a fahrenheit degree instead
//
// Parameters:    celsius(int): The temperature in celsius that needs to
be
//                converted to fahrenheit
//
// Return values: fahrenheit(float): The temperature in fahrenheit
//
*****************************************************************************/
#include "header.h"

void convertCtoF(int celsius, float & fahrenheit)
{
  fahrenheit = ((celsius * (9.0/5.0)) + 32.0);
}
