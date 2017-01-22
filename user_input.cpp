/******************************************************************************
// Function name: getUserInput
//
// DESCRIPTION:   A user-interface funtion that takes an integer input, else
//                gives an error till one is provided
//
// Parameters:    None needed as its purely user-input
//
// Return values: The user's inputed integer
//
*****************************************************************************/
#include "header.h"

int getUserInput()
{
  int validValue;
  int validCheck;
  int inputIndex;
  int inputFinal;
  char inputStart[100];

  validCheck = 0;
  validValue = 0;

  cout << "This program allows you to convert from Celsius C to Fahrenheit F" << endl << endl;

  while(validValue == 0)
  {
    cout << "Please enter a maximum temperature in Celsius (C): ";
    //Store entire input into a container
    cin.getline(inputStart, 100);
    validValue = 1;
    for(inputIndex = 0; inputIndex < strlen(inputStart); inputIndex++)
    {
      //Check for beginning zero and any char(s)
      if((inputStart[inputIndex] < '1' && validCheck == 0) || inputStart[inputIndex] > '9')
      {
        validValue = 0;
      }
      if(inputIndex == 0)
      {
        //If only a zero, throw an error statement
        if(strlen(inputStart) == 1 && inputStart[inputIndex] < '1')
        {
          cout << "Please enter a valid integer, not just zero!" << endl;
        }
        else if(isdigit(inputStart[inputIndex]))
        {
          validValue = 1;
          validCheck = 1;
        }
      }
    }
    if(validValue == 0)
    {
      cout << "Please enter a valid integer, not a string, character, or negative number!" << endl << endl;
      validCheck = 0;
    }
  }

  inputFinal = atoi(inputStart);
  getTempTable(roundUp(inputFinal));
  return inputFinal;
}
