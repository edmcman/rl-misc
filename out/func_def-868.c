#include <stdio.h>

#include <string.h>

#include <stdbool.h>

#include <unistd.h>

# 1 
int writeVariableLengthQuantity(char *outputPtr, int input) {



 if (input == 0) {
  *outputPtr = 0;
  return 1;
 }

 int length = 5;

 for (int i = 4; i >= 0; i--) {
  if (input >> i * 7) {
   break;

  } else {
   length--;
  }
 }

 for (int i = length - 1; i >= 0; i--) {
  if (i != 0) {
   *(outputPtr + length - i - 1) = ((input >> i * 7) & 0x7F) + 0x80;

  } else {
   *(outputPtr + length - i - 1) = (input >> i * 7) & 0x7F;
  }
 }

 return length;
}