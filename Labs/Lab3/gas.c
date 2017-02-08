/**
 * gas.c program
 * Author: Conner Higashino
 * Login: csh3173
 * EE160-002 Spring 2017 Lab 3
 * January 10, 2017
 */

/**
 * Compute some statistics on the cost of operating a car each time you fill up gas.
 */

#include <stdio.h>


int main() {
	/* inputs */
	float milesSinceFilled, gallonsFilled, totalCost;
	/* outputs */
	float costGallon, costMile, milePerGal;

	/* prompt user for inputs */
	printf("How many miles have you gone since the last fill? ");
	scanf("%f", &milesSinceFilled);
	printf("How many gallons did you fill up now? ");
	scanf("%f", &gallonsFilled);
	printf("How much did this fill cost you? ");
	scanf("%f", &totalCost);

	/* Calculate values */
	costGallon = totalCost / gallonsFilled;
  costMile = totalCost / milesSinceFilled;
  milePerGal = milesSinceFilled / gallonsFilled;

  /* Print Results */
  printf("\nNumber of gallons filled: %.2f\n", gallonsFilled);
  printf("Cost per gallon:          %.2f\n", costGallon);
  printf("Cost of fill-up:          %.2f\n", totalCost);
  printf("Number of miles:          %.2f\n", milesSinceFilled);
  printf("Cost per mile:            %.2f\n", costMile);
  printf("Miles per gallon:         %.2f\n", milePerGal);

  return 0;
}
