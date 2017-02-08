/**
 * temperature.c
 * Author: Conner Higashino
 * Login: csh3173
 * EE160-002 Spring 2017 Lab 3
 * January 10, 2017
 */

/**
 * A program that converts from temperature in Fahrenheit to to Celsius unidirectionally
 */

#include <stdio.h>

int main () {
  /* inputs */
  float tempFahren;
  /* outputs */
  float tempCelsius;

  /* Get the user input for temperature in Fahrenheit */
  printf("Enter the temperature in Fahrenheit to convert: ");
  scanf("%f", &tempFahren);

  /* Calculate the temperature in Celsius
   * (T(c) = (T(f) - 32) * 5/9)
   */
  tempCelsius = tempFahren - 32;
  tempCelsius *= 5;
  tempCelsius /= 9;

  /* Print the result to the screen */
  printf("%.2f degrees in Fahrenheit is %.2f degrees in Celsius\n", tempFahren, tempCelsius);

  return 0;
}
