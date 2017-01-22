/******************************************************************************
// Function name: getTempTable
//
// DESCRIPTION:   A funtion that takes an integer input as the max value,
//                then generates a table of all temperatures less than
//                it with conversions to fahrenheit
//
// Parameters:    inputValue(int): The max value that the table will
//                generate
//
// Return values: Nothing except a printed table
//
*****************************************************************************/
#include "header.h"

void getTempTable(int inputValue)
{
  float fahrenheit;
  int outputValue = 0;
  cout << "Temperature in C          Temperature in F" << endl;
  while(outputValue <= inputValue)
  {
    convertCtoF(outputValue, fahrenheit);
    cout << setw(16) << fixed << setprecision(0) << outputValue << setw(26) << fixed << setprecision(2) << fahrenheit << endl;
    outputValue = outputValue + 5; //Increment the counter by 5 degrees
  }
}
