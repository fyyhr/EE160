/**
 * functions.c
 * Author: Conner Higashino
 * Login: csh3173
 * EE 160 Section 2, Spring 2017
 * January 31, 2017
 */

/**
 * A program that demonstrates how functions operate and what their return values are
 */

#include <stdio.h>

void waitForInput();
int changeInteger();
float changeFloat();
char changeChar();

int main() {
  int integer = 0;
  float decimal = 3.14;
  char character = 'a';

  printf("The values of variable integer, decimal, and character are: %d, %.2f, %c\n", integer, decimal, character);
  waitForInput();
  printf("Now, we'll change those values with functions.\n");
  waitForInput();
  integer = changeInteger();
  printf("The value of integer is now %d\n", integer);
  waitForInput();
  decimal = changeFloat();
  printf("The value of decimal is now %.2f\n", decimal);
  waitForInput();
  character = changeChar();
  printf("The value of character is now %c\n", character);
}

int changeInteger() {
  return 9001;
}

float changeFloat() {
  return 99.99;
}

char changeChar() {
  return 'Q';
}






void waitForInput() {
  char c;
  while (getchar() != '\n');
}
