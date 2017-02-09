/**
 * temptbl.c
 * Author: Conner Higashino
 * Login: csh3173
 * EE160-002 Spring 2017 Lab 5
 * February 7, 2017
 */

/**
 * A program that converts a range of Fahrenheit to Celsius in 5 degree F increments
 */

#include <stdio.h>

float tocelsius(float degF);
int temptable(float start, float stop, float step);

int main () {
  /* inputs */
  float startFahren, stopFahren, stepSize;
  /* outputs */
  int linesPrinted, flag;

  while (flag != EOF) {
    /* Reset all values */
    linesPrinted = 0;
    startFahren = 0;
    stopFahren = 0;
    stepSize = 0;
    /* Get the user input for temperatures in Fahrenheit. We assume that the user will input
     * start as a lower value than stop.
     */
    printf("Enter the starting and ending temperatures and the step size (separated by spaces): ");
    flag = scanf("%f %f %f", &startFahren, &stopFahren, &stepSize);
    if (flag == EOF) {
      printf("Bye\n");
      return 0;         //could also use break, but either is fine here
    }
    if (stepSize < 0.001 && stepSize > -0.001) {
      printf("No table--step smaller than 0.001!\n");
    }
    else {
      linesPrinted = temptable(startFahren, stopFahren, stepSize);
      printf("Lines printed: %d\n", linesPrinted);
    }
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
 * stop in step F increments, one conversion per line.
 *
 * @param start  the starting Fahrenheit temperature
 * @param stop   the ending Fahrenheit temperature
 * @param step   the size of each step between of Fahrenheit
 * @return lines the number of table lines printed
 */
int temptable(float start, float stop, float step) {
  int lines;
  float tempCelsius;

  /* Sanatize input, not needed now but good practice */
  if (step < 0.001 && step > -0.001) {
    printf("ERROR");
    return -1;
  }

  /* Convert from negative if needed */
  if (step <= -0.001) {
    step *= -1;     //There are multiple ways of doing this
  }

  printf("Fahrenheit\tCelsius\n");

  if (start < stop) {
    while (start < stop) {  
      tempCelsius = tocelsius(start);
      /* The '\t' used in the printf is just a shortcut for a tab */
      printf("%.2f\t\t %.2f\n", start, tempCelsius);
      start += step; /* Increment the temperature by step amount */
      lines++;  /* Increment line count */
    }
    tempCelsius = tocelsius(stop);
    printf("%.2f\t%.2f\n", stop, tempCelsius);  /* Print out the last value at 'stop' */
    lines++;
  }
  else {
    while (start > stop) {  
      tempCelsius = tocelsius(start);
      /* The '\t' used in the printf is just a shortcut for a tab */
      printf("%.2f\t\t %.2f\n", start, tempCelsius);
      start -= step; /* Decrement the temperature by step amount */
      lines++;  /* Increment line count */
    }
    tempCelsius = tocelsius(stop);
    printf("%.2f\t\t %.2f\n", stop, tempCelsius);  /* Print out the last value at 'stop' */
    lines++;
  }
  return lines;
}

