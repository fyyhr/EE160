/**
 * temperature.c
 * Author: Conner Higashino
 * Login: csh3173
 * EE160-002 Spring 2017 Lab 4
 * January 30, 2017
 */

/**
 * A program that converts from temperature in Fahrenheit to to Celsius unidirectionally
 */

#include <stdio.h>

float tocelsius(float degF);  /* Truth be told, I don't like the name of this function. I would use
                               * toCelsius to make it easier to read. This is called lower camel
                               * case and is the standard in Java method naming. However, C and C++
                               * use all lowercase naming.
                               */

int main () {
  /* inputs */
  float tempFahren;
  /* outputs */
  float tempCelsius;

  while (tempFahren != -500) {
    /* Get the user input for temperature in Fahrenheit */
    printf("Enter the temperature in Fahrenheit to convert: ");
    scanf("%f", &tempFahren);
    tempCelsius = tocelsius(tempFahren);
    /* Print the result to the screen */
    printf("%.2f degrees in Fahrenheit is %.2f degrees in Celsius\n", tempFahren, tempCelsius);
    /* In the next lab, we'll make this work a little nicer. For now, just having it print out one
     * more time before exiting is fine. You are not expected to use if statements yet.
     */
  }
  return 0;
}

/**
 * Returns a float value representing the temperature in celsius, given the temperature in
 * Fahrenheit
 *
 * @param degF the temperature in fahrenheit
 * @return temp the temperature in celsius
 */

float tocelsius(float degF) {
  float temp;
  /* Calculate the temperature in Celsius
   * (T(c) = (T(f) - 32) * 5/9)
   */
  temp = degF - 32;
  temp *= 5;
  temp /= 9;

  return temp;    /* You could also do all the calculations in the return statement, but that's
                   * harder to read.
                  */
