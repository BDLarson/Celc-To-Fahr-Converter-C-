/******************************************************************************
// Function name: roundUp
//
// DESCRIPTION:   A function that takes in an integer value; if the value
//                is a multiple of 5 then it is left alone, otherwise the
//                remainder is added to its original value
//
// Parameters:    inputValue(int): The designated number to check for
//                multiplicity of 5
//
// Return values: setNumber(int): the rounded number or else the same
//                input
//
*****************************************************************************/
#include "header.h"

int roundUp(int inputValue)
{
  int setNumber;
  int tempNumber = inputValue;

  if (tempNumber % 5 == 0)
  {
    setNumber = tempNumber;
  } else {
    setNumber = tempNumber + (5 - (tempNumber % 5));
  }
  return setNumber;
}
