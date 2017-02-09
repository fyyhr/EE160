/**
 * temptbl.c
 * Author: Conner Higashino
 * Login: csh3173
 * EE160-002 Spring 2017 Lab 4
 * January 30, 2017
 */

/**
 * A program that converts a range of Fahrenheit to Celsius in 5 degree F increments
 */

#include <stdio.h>

float tocelsius(float degF);
int temptable(float start, float stop);

int main () {
  /* inputs */
  float startFahren, stopFahren;
  /* outputs */
  int linesPrinted;

  while (startFahren != stopFahren) {
    linesPrinted = 0; /* Reset lines printed value */
    /* Get the user input for temperatures in Fahrenheit. We assume that the user will input
     * start as a lower value than stop.
     */
    printf("Enter the starting temperature in Fahrenheit to convert: ");
    scanf("%f", &startFahren);
    printf("Enter the ending temperature in Fahrenheit to convert: ");
    scanf("%f", &stopFahren);
    linesPrinted = temptable(startFahren, stopFahren);
    printf("Lines printed: %d\n", linesPrinted);
  }
  return 0;
}

/**
 * Returns a float value representing the temperature in celsius, given the temperature in
 * Fahrenheit
 *
 * @param degF   the temperature in fahrenheit
 * @return temp  the temperature in celsius
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
}

/**
 * Prints a table of conversions from degress Fahrenheit to degrees Celsius from start to at most
 * stop in five degree F increments, one conversion per line.
 *
 * @param start  the starting Fahrenheit temperature
 * @param stop   the ending Fahrenheit temperature
 * @return lines the number of table lines printed
 */
int temptable(float start, float stop) {
  int lines;
  float tempCelsius;

  /* You could also call the function in the printf when fetching the variable value, but that's
   * harder to read, so I generally recommend against it.
   */
  while (start < stop) {
    tempCelsius = tocelsius(start);
    printf("%f F is %f C\n", start, tempCelsius);
    start += 5; /* Increment the temperature by 5 */
    lines++;  /* Increment line count */
  }
  tempCelsius = tocelsius(stop);
  printf("%f F is %f C\n", stop, tempCelsius);  /* Print out the last value at 'stop' */
  lines++;
  return lines;
}

